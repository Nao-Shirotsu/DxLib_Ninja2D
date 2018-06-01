#pragma once

#include "DxLib.h"
#include "Dx_Input.h"
#include "Scene_Base.h"

namespace Dx{
class Manager : Input{
public:
	Utility::Return_State init();
	Utility::Return_State update();
	Utility::Return_State drawCircle(int x, int y, unsigned int color);
	Utility::Return_State drawNinja( int x, int y );
	Utility::Return_State end();
	Utility::Return_State getInput();
	Utility::Return_State Process();
	Utility::Return_State drawStr( int x, int y, char *str, unsigned int color );
	int randX();
	int randY();

	bool isGameEnd();
	bool isPressedEnter();
	void setWindowConfig();

private:
	Input *input;
};

}