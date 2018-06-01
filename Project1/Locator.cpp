#include "Locator.h"

Utility::Return_State Locator::init( Dx::Manager * dp ){
	dxmPtr = dp;

	return Utility::Return_State::ok;
}

Utility::Return_State Locator::update_Scene( Scene::Base * sp ){
	scnPtr = sp;

	return Utility::Return_State::ok;
}

Dx::Manager * Locator::getDxmPtr(){

	return dxmPtr;
}

Scene::Base * Locator::getScnPtr(){

	return scnPtr;
}

Locator *locator = new Locator;