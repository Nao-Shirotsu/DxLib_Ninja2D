#pragma once

#include "Scene_Base.h"

namespace Scene{
class Game : public Base{
public:
	Utility::Return_State init();
	Utility::Current_Scene update();
	Utility::Return_State draw();
	bool getChanged();
	void setXYrand();
	int getX();
	int getY();

private:
	char *tips;
	bool isChanged = false;
	int x;
	int y;
};

}