#include "DxLib.h"
#include "Game_Manager.h"

int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow ){
	Game::Manager gameManager;
	if ( gameManager.init() != Utility::Return_State::ok ){
		return 0;
	}

	while ( !gameManager.isGameEnd() ){
		gameManager.update(); //input��update���ōs�Ȃ�
		gameManager.draw();
	}

	gameManager.end();      // �c�w���C�u�����g�p�̏I������
	return 0;
}