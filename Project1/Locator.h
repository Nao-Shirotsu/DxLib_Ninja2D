#pragma once

#include "Scene_Base.h"
#include "Dx_Manager.h"
#include "Utility.h"

class Locator{
public:
	Utility::Return_State init( Dx::Manager *dp );
	Utility::Return_State update_Scene( Scene::Base *sp );
	Dx::Manager *getDxmPtr();
	Scene::Base *getScnPtr();

private:
	Dx::Manager *dxmPtr;
	Scene::Base *scnPtr;
};

extern Locator *locator;