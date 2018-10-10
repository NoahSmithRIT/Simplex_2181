#include "AppClass.h"
void Application::InitVariables(void)
{
	//Change this to your name and email
	m_sProgrammer = "Noah Smith - nes9968@rit.edu";
	
	//Set the position and target of the camera
	//(I'm at [0,0,10], looking at [0,0,0] and up is the positive Y axis)
	m_pCameraMngr->SetPositionTargetAndUpward(AXIS_Z * 20.0f, ZERO_V3, AXIS_Y);

	//if the light position is zero move it
	if (m_pLightMngr->GetPosition(1) == ZERO_V3)
		m_pLightMngr->SetPosition(vector3(0.0f, 0.0f, 3.0f));

	//if the background is cornflowerblue change it to black (its easier to see)
	if (vector3(m_v4ClearColor) == C_BLUE_CORNFLOWER)
	{
		m_v4ClearColor = vector4(ZERO_V3, 1.0f);
	}
	
	//if there are no segments create 7
	if(m_uOrbits < 1)
		m_uOrbits = 7;

	float fSize = 1.0f; //initial size of orbits

	//creating a color using the spectrum 
	uint uColor = 650; //650 is Red
	//prevent division by 0
	float decrements = 250.0f / (m_uOrbits > 1? static_cast<float>(m_uOrbits - 1) : 1.0f); //decrement until you get to 400 (which is violet)
	/*
		This part will create the orbits, it start at 3 because that is the minimum subdivisions a torus can have
	*/
	uint uSides = 3; //start with the minimal 3 sides
	for (uint i = uSides; i < m_uOrbits + uSides; i++)
	{
		vector3 v3Color = WaveLengthToRGB(uColor); //calculate color based on wavelength
		m_shapeList.push_back(m_pMeshMngr->GenerateTorus(fSize, fSize - 0.1f, 3, i, v3Color)); //generate a custom torus and add it to the meshmanager
		fSize += 0.5f; //increment the size for the next orbit
		uColor -= static_cast<uint>(decrements); //decrease the wavelength
	}
}
void Application::Update(void)
{
	//Update the system so it knows how much time has passed since the last call
	m_pSystem->Update();

	//Is the arcball active?
	ArcBall();

	//Is the first person camera active?
	CameraRotation();
}
void Application::Display(void)
{
	// Clear the screen
	ClearScreen();

	matrix4 m4View = m_pCameraMngr->GetViewMatrix(); //view Matrix
	matrix4 m4Projection = m_pCameraMngr->GetProjectionMatrix(); //Projection Matrix
	matrix4 m4Offset = IDENTITY_M4; //offset of the orbits, starts as the global coordinate system
	/*
		The following offset will orient the orbits as in the demo, start without it to make your life easier.
	*/
	m4Offset = glm::rotate(IDENTITY_M4, 1.5708f, AXIS_Z);

	static std::vector<std::vector<vector3>> totalList; // list of lists

	// draw a shapes
	for (uint i = 0; i < m_uOrbits; ++i)
	{
		m_pMeshMngr->AddMeshToRenderList(m_shapeList[i], glm::rotate(m4Offset, 1.5708f, AXIS_X));

		// A03
		static int numberOfPoints = 3; // starts with 3 for triangle
		std::vector<vector3> stopList; // list containing stops for one shape, resets (non static)
		static float radius = 0.95f; // starting radius of circle, increases by 0.5 for every new shape
		float x;
		float y;
		int pointNumber = 1; // counting variable for what point is being calculated, resets

		for (int i = 0; i <= numberOfPoints; ++i)
		{
			x = radius * cos(pointNumber * ((2 * PI) / numberOfPoints));
			y = radius * sin(pointNumber * ((2 * PI) / numberOfPoints));
			stopList.push_back(vector3(x, y, 0.0f));
			pointNumber++;
		}

		// add list of stops to list
		totalList.push_back(stopList);

		// increment
		numberOfPoints++;
		radius += 0.5f;

		// lerp
		//Get a timer
		static float fTimer = 0;	//store the new timer
		static uint uClock = m_pSystem->GenClock(); //generate a new clock for that timer
		fTimer += m_pSystem->GetDeltaTime(uClock); //get the delta time for that timer

		vector3 v3CurrentPos = vector3(0.0f, 0.0f, 0.0f);

		vector3 v3Start; //start point
		vector3 v3End; // end point
		static uint route = 0; //current route

		v3Start = totalList[i][route % (i + 3)];
		v3End = totalList[i][(route + 1) % (i + 3)];

		//get the percentace
		float fTimeBetweenStops = 1.0;//in seconds
		//map the value to be between 0.0 and 1.0
		float fPercentage = MapValue(fTimer, 0.0f, fTimeBetweenStops, 0.0f, 1.0f);

		//calculate the current position
		v3CurrentPos = glm::lerp(v3Start, v3End, fPercentage);
		matrix4 m4Model = glm::translate(m4Offset, v3CurrentPos);

		//draw spheres
		m_pMeshMngr->AddSphereToRenderList(m4Model * glm::scale(vector3(0.1)), C_WHITE);

		//if we are done with this route
		if (fPercentage >= 1.0f)
		{
			route++; //go to the next route
			fTimer = m_pSystem->GetDeltaTime(uClock);//restart the clock
			route %= totalList.size();
		}
	}
	
	//render list call
	m_uRenderCallCount = m_pMeshMngr->Render();

	//clear the render list
	m_pMeshMngr->ClearRenderList();
	
	//draw gui
	DrawGUI();
	
	//end the current frame (internally swaps the front and back buffers)
	m_pWindow->display();
}
void Application::Release(void)
{
	//release GUI
	ShutdownGUI();
}