#include "AppClass.h"
void Application::InitVariables(void)
{
	//Make MyMesh object
	m_pMesh = new MyMesh();
	/*
	m_pMesh->AddVertexPosition(vector3(-1, -1, 0));
	m_pMesh->AddVertexColor(vector3(1, 0, 0));

	m_pMesh->AddVertexPosition(vector3(1, -1, 0));
	m_pMesh->AddVertexColor(vector3(0, 1, 0));

	m_pMesh->AddVertexPosition(vector3(-1, 1, 0));
	m_pMesh->AddVertexColor(vector3(0, 0, 1));

	m_pMesh->AddVertexPosition(vector3(-1, 1, 0));
	m_pMesh->AddVertexPosition(vector3(1, -1, 0));
	m_pMesh->AddVertexPosition(vector3(1, 1, 0));

	m_pMesh->CompileOpenGL3X();
	*/
	
	m_pMesh->GenerateCube(1.0f, C_BROWN);

	//Make MyMesh object
	m_pMesh1 = new MyMesh();
	m_pMesh1->GenerateCube(1.0f, C_WHITE);

	m_pCameraMngr->SetPositionTargetAndUpward(vector3(0.0f, 0.0f, 10.0f), vector3(0.0f), AXIS_Y);
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

	static float fDisp = 0.0f;
	fDisp += 0.005f;

	matrix4 m4Space = glm::translate(vector3(fDisp, 0.0f, 0.0f)); // use to move the whole thing

	//m4Translation[3] = vector4(3.0f, 3.0f, 0.0f, 1.0f);
	matrix4 m4Translation = m4Space * glm::translate(vector3(0.0f, 0.0f, 0.0f)); // same as above
	//matrix4 m4Scale = glm::scale(vector3(2.0f, 2.0f, 2.0f));
	//matrix4 m4Comp = m4Scale * m4Translation;
	//matrix4 m4Comp = m4Translation * m4Scale;

	matrix4 m4Translation2;
	m4Translation2 = glm::translate(m4Space, vector3(1.0f, 0.0f, 0.0f));


	m_pMesh->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation);
	m_pMesh1->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation2);
		
	// draw a skybox
	m_pMeshMngr->AddSkyboxToRenderList();
	
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
	if (m_pMesh != nullptr)
	{
		delete m_pMesh;
		m_pMesh = nullptr;
	}
	SafeDelete(m_pMesh1);
	//release GUI
	ShutdownGUI();
}