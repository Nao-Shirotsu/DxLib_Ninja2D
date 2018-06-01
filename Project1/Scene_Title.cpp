#include "Scene_Title.h"
#include "Locator.h"

namespace Scene{
using namespace Utility;
Return_State Title::init(){
	gameTitle = "Ninja Explore\n\n";
	pressButton = "press \'Enter\' to start.\npress \'Esc\' to quit.";
	x = 10;
	y = 10;
	return Return_State::ok;
}

Current_Scene Title::update(){
	if ( locator->getDxmPtr()->isPressedEnter() ){
		isChanged = true;
		return Current_Scene::game;
	}
	return Current_Scene::title;
}

Return_State Title::draw(){
	locator->getDxmPtr()->drawStr( x, y, gameTitle, 0xaa2222);
	locator->getDxmPtr()->drawStr( x, y+30, pressButton, 0xffffff );
	return Return_State::ok;
}

bool Title::getChanged(){
	return isChanged;
}
	
}