#include "DxLib.h"
#include "Game_Manager.h"

int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow ){
	Game::Manager gameManager;
	if ( gameManager.init() != Utility::Return_State::ok ){
		return 0;
	}

	while ( !gameManager.isGameEnd() ){
		gameManager.update(); //inputはupdate内で行なう
		gameManager.draw();
	}

	gameManager.end();      // ＤＸライブラリ使用の終了処理
	return 0;
}