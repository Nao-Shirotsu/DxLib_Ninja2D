#pragma once

#include "Utility.h"
#include "Dx_Manager.h"
#include "Scene_Base.h"

namespace Game{
class Manager{
public:
	Utility::Return_State init();
	Utility::Return_State update();
	Utility::Return_State draw();
	Utility::Return_State getInput();
	bool isGameEnd();
	void end(); //‰ð•ú‚Ì‚½‚ß

private:
	Dx::Manager *dxManager;
	bool game_end = false;
	bool isChanged = false;
	Scene::Base *scene;
	Utility::Current_Scene where_now;
};
		
}