#include "Dx_Manager.h"

namespace Dx{
using namespace Utility;

Return_State Manager::init(){
	setWindowConfig();

	if ( DxLib_Init() != 0 ){
		return Return_State::error;
	}

	input = new Input;
	return Return_State::ok;
}

Return_State Manager::update(){
	ScreenFlip();
	WaitTimer(200);
	ClearDrawScreen();

	return Return_State::ok;
}

Return_State Manager::drawCircle(int x, int y, unsigned int color){
	if ( input->isKeyDown( Input::Key::C ) ){
		DrawCircle( x, y, 50, color, TRUE );
	}
	return Return_State::ok;
}

Utility::Return_State Manager::drawNinja( int x, int y ){
	if ( input->isKeyDown( Input::Key::N ) ){
		LoadGraphScreen( x, y, "./ninja.png", false );
	
	} else{
		drawStr( 280, 240, "Press N !!" , 0xffffff);
	}
	return Utility::Return_State();
}

Return_State Manager::end(){
	DxLib_End();
	delete input;

	return Return_State::ok;
}

Return_State Manager::getInput(){

	return input->reloadKey();
}

Utility::Return_State Manager::Process(){
	if ( ProcessMessage() == -1 ){
		return Return_State::error;
	}
	return Return_State::ok;
}

Utility::Return_State Manager::drawStr( int x, int y, char *str, unsigned int color ){
		DrawString( x, y, str, color );
	return Utility::Return_State::ok;
}

int Manager::randX(){

	return GetRand(640 - 1);
}

int Manager::randY(){
	return GetRand(480 - 1);
}

bool Manager::isGameEnd(){
	if ( input->isKeyDown( Input::Key::Esc ) ){
		return true;
	}
	return false;
}

bool Manager::isPressedEnter(){
	if( input->isKeyDown( Input::Key::Return ) ){
		return true;
	}
	return false;
}

void Manager::setWindowConfig(){
	ChangeWindowMode( TRUE ); //640 * 480
	char *title = "Ninja Explore";
	SetMainWindowText( title );
	SetDrawScreen( DX_SCREEN_BACK );
}

}