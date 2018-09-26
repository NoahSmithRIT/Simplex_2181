#include "AppClass.h"
void Application::InitVariables(void)
{
	//Make MyMesh object
	
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
	
	//Make MyMesh object
	m_pMesh = new MyMesh();
	m_pMesh->GenerateCube(1.0f, C_BLACK); // center (between eyes)

	// make meshes
	// antennae
	m_pMesh1 = new MyMesh();
	m_pMesh1->GenerateCube(1.0f, C_BLACK);
	m_pMesh2 = new MyMesh();
	m_pMesh2->GenerateCube(1.0f, C_BLACK);
	m_pMesh3 = new MyMesh();
	m_pMesh3->GenerateCube(1.0f, C_BLACK);
	m_pMesh4 = new MyMesh();
	m_pMesh4->GenerateCube(1.0f, C_BLACK);
	// head row 1
	m_pMesh5 = new MyMesh();
	m_pMesh5->GenerateCube(1.0f, C_BLACK);
	m_pMesh6 = new MyMesh();
	m_pMesh6->GenerateCube(1.0f, C_BLACK);
	m_pMesh7 = new MyMesh();
	m_pMesh7->GenerateCube(1.0f, C_BLACK);
	m_pMesh8 = new MyMesh();
	m_pMesh8->GenerateCube(1.0f, C_BLACK);
	m_pMesh9 = new MyMesh();
	m_pMesh9->GenerateCube(1.0f, C_BLACK);
	m_pMesh10 = new MyMesh();
	m_pMesh10->GenerateCube(1.0f, C_BLACK);
	m_pMesh11= new MyMesh();
	m_pMesh11->GenerateCube(1.0f, C_BLACK);
	// head row 2
	m_pMesh12 = new MyMesh();
	m_pMesh12->GenerateCube(1.0f, C_BLACK);
	m_pMesh13 = new MyMesh();
	m_pMesh13->GenerateCube(1.0f, C_BLACK);
	m_pMesh14 = new MyMesh();
	m_pMesh14->GenerateCube(1.0f, C_BLACK);
	m_pMesh15 = new MyMesh();
	m_pMesh15->GenerateCube(1.0f, C_BLACK);
	m_pMesh16 = new MyMesh();
	m_pMesh16->GenerateCube(1.0f, C_BLACK);
	m_pMesh17 = new MyMesh();
	m_pMesh17->GenerateCube(1.0f, C_BLACK);
	// head row 3
	m_pMesh18 = new MyMesh();
	m_pMesh18->GenerateCube(1.0f, C_BLACK);
	m_pMesh19 = new MyMesh();
	m_pMesh19->GenerateCube(1.0f, C_BLACK);
	m_pMesh20 = new MyMesh();
	m_pMesh20->GenerateCube(1.0f, C_BLACK);
	m_pMesh21 = new MyMesh();
	m_pMesh21->GenerateCube(1.0f, C_BLACK);
	m_pMesh22 = new MyMesh();
	m_pMesh22->GenerateCube(1.0f, C_BLACK);
	m_pMesh23 = new MyMesh();
	m_pMesh23->GenerateCube(1.0f, C_BLACK);
	m_pMesh24 = new MyMesh();
	m_pMesh24->GenerateCube(1.0f, C_BLACK);
	m_pMesh25 = new MyMesh();
	m_pMesh25->GenerateCube(1.0f, C_BLACK);
	m_pMesh26 = new MyMesh();
	m_pMesh26->GenerateCube(1.0f, C_BLACK);
	m_pMesh27 = new MyMesh();
	m_pMesh27->GenerateCube(1.0f, C_BLACK);
	m_pMesh28 = new MyMesh();
	m_pMesh28->GenerateCube(1.0f, C_BLACK);
	// head row 4
	m_pMesh29 = new MyMesh();
	m_pMesh29->GenerateCube(1.0f, C_BLACK);
	m_pMesh30 = new MyMesh();
	m_pMesh30->GenerateCube(1.0f, C_BLACK);
	m_pMesh31 = new MyMesh();
	m_pMesh31->GenerateCube(1.0f, C_BLACK);
	m_pMesh32 = new MyMesh();
	m_pMesh32->GenerateCube(1.0f, C_BLACK);
	m_pMesh33 = new MyMesh();
	m_pMesh33->GenerateCube(1.0f, C_BLACK);
	m_pMesh34 = new MyMesh();
	m_pMesh34->GenerateCube(1.0f, C_BLACK);
	m_pMesh35 = new MyMesh();
	m_pMesh35->GenerateCube(1.0f, C_BLACK);
	m_pMesh36 = new MyMesh();
	m_pMesh36->GenerateCube(1.0f, C_BLACK);
	m_pMesh37 = new MyMesh();
	m_pMesh37->GenerateCube(1.0f, C_BLACK);
	// head row 5
	m_pMesh38 = new MyMesh();
	m_pMesh38->GenerateCube(1.0f, C_BLACK);
	m_pMesh39 = new MyMesh();
	m_pMesh39->GenerateCube(1.0f, C_BLACK);
	m_pMesh40 = new MyMesh();
	m_pMesh40->GenerateCube(1.0f, C_BLACK);
	m_pMesh41 = new MyMesh();
	m_pMesh41->GenerateCube(1.0f, C_BLACK);
	// mouth
	m_pMesh42 = new MyMesh();
	m_pMesh42->GenerateCube(1.0f, C_BLACK);
	m_pMesh43 = new MyMesh();
	m_pMesh43->GenerateCube(1.0f, C_BLACK);
	m_pMesh44 = new MyMesh();
	m_pMesh44->GenerateCube(1.0f, C_BLACK);
	m_pMesh45 = new MyMesh();
	m_pMesh45->GenerateCube(1.0f, C_BLACK);

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
	matrix4 m4Translation = m4Space * glm::translate(vector3(0.0f, 0.0f, 0.0f)); // same as above, center
	//matrix4 m4Scale = glm::scale(vector3(2.0f, 2.0f, 2.0f));
	//matrix4 m4Comp = m4Scale * m4Translation;
	//matrix4 m4Comp = m4Translation * m4Scale;

	// make translations
	// antennae
	matrix4 m4Translation2 = glm::translate(m4Space, vector3(-3.0f, 3.0f, 0.0f));
	matrix4 m4Translation3 = glm::translate(m4Space, vector3(-2.0f, 2.0f, 0.0f));
	matrix4 m4Translation4 = glm::translate(m4Space, vector3(3.0f, 3.0f, 0.0f));
	matrix4 m4Translation5 = glm::translate(m4Space, vector3(2.0f, 2.0f, 0.0f));
	// head row 1
	matrix4 m4Translation6 = glm::translate(m4Space, vector3(-3.0f, 1.0f, 0.0f));
	matrix4 m4Translation7 = glm::translate(m4Space, vector3(-2.0f, 1.0f, 0.0f));
	matrix4 m4Translation8 = glm::translate(m4Space, vector3(-1.0f, 1.0f, 0.0f));
	matrix4 m4Translation9 = glm::translate(m4Space, vector3(0.0f, 1.0f, 0.0f));
	matrix4 m4Translation10 = glm::translate(m4Space, vector3(1.0f, 1.0f, 0.0f));
	matrix4 m4Translation11 = glm::translate(m4Space, vector3(2.0f, 1.0f, 0.0f));
	matrix4 m4Translation12 = glm::translate(m4Space, vector3(3.0f, 1.0f, 0.0f));
	// head row 2
	matrix4 m4Translation13 = glm::translate(m4Space, vector3(-4.0f, 0.0f, 0.0f));
	matrix4 m4Translation14 = glm::translate(m4Space, vector3(-3.0f, 0.0f, 0.0f));
	matrix4 m4Translation15 = glm::translate(m4Space, vector3(-1.0f, 0.0f, 0.0f));
	matrix4 m4Translation16 = glm::translate(m4Space, vector3(1.0f, 0.0f, 0.0f));
	matrix4 m4Translation17 = glm::translate(m4Space, vector3(3.0f, 0.0f, 0.0f));
	matrix4 m4Translation18 = glm::translate(m4Space, vector3(4.0f, 0.0f, 0.0f));
	// head row
	matrix4 m4Translation19 = glm::translate(m4Space, vector3(-5.0f, -1.0f, 0.0f));
	matrix4 m4Translation20 = glm::translate(m4Space, vector3(-4.0f, -1.0f, 0.0f));
	matrix4 m4Translation21 = glm::translate(m4Space, vector3(-3.0f, -1.0f, 0.0f));
	matrix4 m4Translation22 = glm::translate(m4Space, vector3(-2.0f, -1.0f, 0.0f));
	matrix4 m4Translation23 = glm::translate(m4Space, vector3(-1.0f, -1.0f, 0.0f));
	matrix4 m4Translation24 = glm::translate(m4Space, vector3(0.0f, -1.0f, 0.0f));
	matrix4 m4Translation25 = glm::translate(m4Space, vector3(1.0f, -1.0f, 0.0f));
	matrix4 m4Translation26 = glm::translate(m4Space, vector3(2.0f, -1.0f, 0.0f));
	matrix4 m4Translation27 = glm::translate(m4Space, vector3(3.0f, -1.0f, 0.0f));
	matrix4 m4Translation28 = glm::translate(m4Space, vector3(4.0f, -1.0f, 0.0f));
	matrix4 m4Translation29 = glm::translate(m4Space, vector3(5.0f, -1.0f, 0.0f));
	// head row 4
	matrix4 m4Translation30 = glm::translate(m4Space, vector3(-5.0f, -2.0f, 0.0f));
	matrix4 m4Translation31 = glm::translate(m4Space, vector3(-3.0f, -2.0f, 0.0f));
	matrix4 m4Translation32 = glm::translate(m4Space, vector3(-2.0f, -2.0f, 0.0f));
	matrix4 m4Translation33 = glm::translate(m4Space, vector3(-1.0f, -2.0f, 0.0f));
	matrix4 m4Translation34 = glm::translate(m4Space, vector3(0.0f, -2.0f, 0.0f));
	matrix4 m4Translation35 = glm::translate(m4Space, vector3(1.0f, -2.0f, 0.0f));
	matrix4 m4Translation36 = glm::translate(m4Space, vector3(2.0f, -2.0f, 0.0f));
	matrix4 m4Translation37 = glm::translate(m4Space, vector3(3.0f, -2.0f, 0.0f));
	matrix4 m4Translation38 = glm::translate(m4Space, vector3(5.0f, -2.0f, 0.0f));
	// head row 5
	matrix4 m4Translation39 = glm::translate(m4Space, vector3(-5.0f, -3.0f, 0.0f));
	matrix4 m4Translation40 = glm::translate(m4Space, vector3(-3.0f, -3.0f, 0.0f));
	matrix4 m4Translation41 = glm::translate(m4Space, vector3(3.0f, -3.0f, 0.0f));
	matrix4 m4Translation42 = glm::translate(m4Space, vector3(5.0f, -3.0f, 0.0f));
	// mouth
	matrix4 m4Translation43 = glm::translate(m4Space, vector3(-2.0f, -4.0f, 0.0f));
	matrix4 m4Translation44 = glm::translate(m4Space, vector3(-1.0f, -4.0f, 0.0f));
	matrix4 m4Translation45 = glm::translate(m4Space, vector3(1.0f, -4.0f, 0.0f));
	matrix4 m4Translation46 = glm::translate(m4Space, vector3(2.0f, -4.0f, 0.0f));

	// render meshes
	m_pMesh->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation);
	// antennae
	m_pMesh1->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation2);
	m_pMesh2->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation3);
	m_pMesh3->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation4);
	m_pMesh4->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation5);
	// head row 1
	m_pMesh5->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation6);
	m_pMesh6->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation7);
	m_pMesh7->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation8);
	m_pMesh8->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation9);
	m_pMesh9->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation10);
	m_pMesh10->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation11);
	m_pMesh11->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation12);
	// head row 2
	m_pMesh12->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation13);
	m_pMesh13->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation14);
	m_pMesh14->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation15);
	m_pMesh15->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation16);
	m_pMesh16->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation17);
	m_pMesh17->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation18);
	// head row 3
	m_pMesh18->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation19);
	m_pMesh19->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation20);
	m_pMesh20->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation21);
	m_pMesh21->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation22);
	m_pMesh22->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation23);
	m_pMesh23->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation24);
	m_pMesh24->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation25);
	m_pMesh25->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation26);
	m_pMesh26->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation27);
	m_pMesh27->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation28);
	m_pMesh28->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation29);
	// head row 4
	m_pMesh29->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation30);
	m_pMesh30->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation31);
	m_pMesh31->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation32);
	m_pMesh32->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation33);
	m_pMesh33->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation34);
	m_pMesh34->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation35);
	m_pMesh35->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation36);
	m_pMesh36->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation37);
	m_pMesh37->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation38);
	// head row 5
	m_pMesh38->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation39);
	m_pMesh39->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation40);
	m_pMesh40->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation41);
	m_pMesh41->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation42);
	// mouth
	m_pMesh42->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation43);
	m_pMesh43->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation44);
	m_pMesh44->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation45);
	m_pMesh45->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), m4Translation46);
		
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