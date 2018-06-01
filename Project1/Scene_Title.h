#pragma once

#include "Scene_Base.h"

namespace Scene{
class Title : public Base{
public:
	Utility::Return_State init();
	Utility::Current_Scene update();
	Utility::Return_State draw();
	bool getChanged();

private:
	char *gameTitle;
	char *pressButton;
	int x;
	int y;
	bool isChanged = false;
};

}