#include "Scene_Game.h"
#include "Locator.h"

namespace Scene{
using namespace Utility;
Return_State Game::init(){
	tips = "Press \'Esc\' to quit.";
	return Return_State::ok;
}

Current_Scene Game::update(){
	setXYrand();
	return Current_Scene::game;
}

Return_State Game::draw(){
	locator->getDxmPtr()->drawNinja(getX()-120, getY()-80);
	return Return_State::ok;
}

bool Game::getChanged(){
	return isChanged;
}

void Game::setXYrand(){
	x = locator->getDxmPtr()->randX();
	y = locator->getDxmPtr()->randY();
}

int Game::getX(){
	return x;
}

int Game::getY(){
	return y;
}

}