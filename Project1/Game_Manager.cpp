#include "Game_Manager.h"
#include "Scene_Title.h"
#include "Scene_Game.h"
#include "Locator.h"

namespace Game{
using namespace Utility;

Return_State Manager::init(){
	dxManager = new Dx::Manager;
	dxManager->setWindowConfig();
	where_now = Current_Scene::title;
	scene = new Scene::Title;
	if ( dxManager->init() != Return_State::ok ){
		return Return_State::error;
	}

	scene->init();
	locator->init( dxManager );
	locator->update_Scene( scene );

	return Return_State::ok;
}

Return_State Manager::getInput(){
	dxManager->getInput();
	return Return_State::ok;
}

Return_State Manager::update(){
	if ( dxManager->Process() == Return_State::error ){
		game_end = true; // エラーが起きたらループを抜ける
	}

	if ( where_now == Current_Scene::game && scene->getChanged() ){

		delete scene;
		scene = new Scene::Game;
		scene->init();
		isChanged = false;
	}

	where_now = scene->update();
	dxManager->update();
	getInput();

	return Return_State::ok;
}

Return_State Manager::draw(){
	scene->draw();
	//dxManager->draw();
	
	return Return_State::ok;
}

bool Manager::isGameEnd(){

	return dxManager->isGameEnd();
}

void Manager::end(){
	dxManager->end();
	delete dxManager;
}

}