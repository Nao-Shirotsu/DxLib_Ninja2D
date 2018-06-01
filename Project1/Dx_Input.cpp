#include "Dx_Input.h"
#include "DxLib.h"

namespace Dx{

char Input::current_button[256];

bool Input::isKeyDown( Key key ){
	return current_button[static_cast<int>( key )];
}

Utility::Return_State Input::init(){
	for ( int i = 0; i < 256; i++ ){
		current_button[i] = -1;
	}
	return Utility::Return_State::ok;
}

Utility::Return_State Input::reloadKey(){
	GetHitKeyStateAll( current_button );
	return Utility::Return_State::ok;
}

}