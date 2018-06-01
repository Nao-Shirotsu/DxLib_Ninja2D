#pragma once

#include "Utility.h"

namespace Scene{
class Base{
public:
	virtual Utility::Return_State init() = 0;
	virtual Utility::Current_Scene update() = 0;
	virtual Utility::Return_State draw() = 0;
	virtual bool getChanged() = 0;

private:
	bool isChanged;
};

}