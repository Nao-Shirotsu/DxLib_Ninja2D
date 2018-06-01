#pragma once

#include "Utility.h"

namespace Dx{
class Input{
public:
	enum class Key{ // �L�[��`
		Esc = 0x01, // Esc D_DIK_ESCAPE
		_1, // D_DIK_1
		_2, // D_DIK_2
		_3, // D_DIK_3
		_4, // D_DIK_4
		_5, // D_DIK_5
		_6, // D_DIK_6
		_7, // D_DIK_7
		_8, // D_DIK_8
		_9, // D_DIK_9
		_0, // D_DIK_0

		BackSpace = 0x0E, // BackSpace D_DIK_BACK
		Return = 0x1C, // Enter D_DIK_RETURN
		Space = 0x39, // �X�y�[�X D_DIK_SPACE

		Insert = 0xD2, // Insert D_DIK_INSERT
		Delete = 0xD3, // Delete D_DIK_DELETE
		End = 0xCF, // End D_DIK_END
		Home = 0xC7, // Home D_DIK_HOME
		PageUp = 0xC9, // PageUp D_DIK_PGUP
		PageDown = 0xD1, // PageDown D_DIK_PGDN

		Tab = 0x0F, // Tab D_DIK_TAB
		CapsLock = 0x3A, //CapsLock D_DIK_CAPSLOCK
		AppMenu = 0xDD, // �A�v���P�[�V�������j���[ D_DIK_APPS

		PrintScreen = 0xB7, // PrintScreen D_DIK_SYSRQ
		ScrollLock = 0x46, // ScrollLock D_DIK_SCROLL
		Pause = 0xC5, // PauseBreak D_DIK_PAUSE

		LShift = 0x2A, //��Shift D_DIK_LSHIFT
		RShift = 0x36, // �EShift D_DIK_RSHIFT
		Ctrl_Left = 0x1D, // ��Ctrl D_DIK_LCONTROL
		Ctrl_Right = 0x9D, // �ECtrl D_DIK_RCONTROL
		Alt_Left = 0x38, // ��Alt D_DIK_LALT
		Alt_Right = 0xB8, // �EAlt D_DIK_RALT
		Win_Left = 0xDB, // ��Win D_DIK_LWIN
		Win_Right = 0xDC, // �EWin D_DIK_RWIN

		Allow_Left = 0xCB, // �� D_DIK_LEFT
		Allow_Up = 0xC8, // �� D_DIK_UP
		Allow_Right = 0xCD, // �E D_DIK_RIGHT
		Allow_Down = 0xD0, // �� D_DIK_DOWN

		Kanji = 0x94, // ���� D_DIK_KANJI
		Henkan = 0x79, // �ϊ� D_DIK_CONVERT
		Muhenkan = 0x7B, // ���ϊ� D_DIK_NOCONVERT
		Kana = 0x70, // �J�i D_DIK_KANA

		Minus = 0x0C, // - D_DIK_MINUS
		Slash = 0x35, // / D_DIK_SLASH  
		Yen = 0x7D, // �� D_DIK_YEN
		BackSlash = 0x2B, // �_ D_DIK_BACKSLASH
		Caret = 0x90, // ^ D_DIK_PREVTRACK
		Period = 0x34, // . D_DIK_PERIOD
		SemiColon = 0x27, // ; D_DIK_SEMICOLON
		Colon = 0x92, // : D_DIK_COLON
		Bracket_Left = 0x1A, // [ D_DIK_LBRACKET
		Bracket_Right = 0x1B, // ] D_DIK_RBRACKET
		AtMark = 0x91, // @ D_DIK_AT
		Comma = 0x33, // , D_DIK_COMMA

		NumLock = 0x45, // �e���L�[NumLock D_DIK_NUMLOCK
		Num_0 = 0x52, // �e���L�[0 D_DIK_NUMPAD0
		Num_1 = 0x4F, // �e���L�[1 D_DIK_NUMPAD1
		Num_2 = 0x50, // �e���L�[2 D_DIK_NUMPAD2
		Num_3 = 0x51, // �e���L�[3 D_DIK_NUMPAD3
		Num_4 = 0x4B, // �e���L�[4 D_DIK_NUMPAD4
		Num_5 = 0x4C, // �e���L�[5 D_DIK_NUMPAD5
		Num_6 = 0x4D, // �e���L�[6 D_DIK_NUMPAD6
		Num_7 = 0x47, // �e���L�[7 D_DIK_NUMPAD7
		Num_8 = 0x48, // �e���L�[8 D_DIK_NUMPAD8
		Num_9 = 0x49, // �e���L�[9 D_DIK_NUMPAD9
		Num_Asterisk = 0x37, // �e���L�[* D_DIK_MULTIPLY
		Num_Add = 0x4E, // �e���L�[+ D_DIK_ADD
		Num_Hyphen = 0x4A, // �e���L�[-  D_DIK_SUBTRACT
		Num_Dot = 0x53, // �e���L�[. D_DIK_DECIMAL
		Num_Slash = 0xB5, // �e���L�[/ D_DIK_DIVIDE
		Num_Enter = 0x9C, // �e���L�[�̃G���^�[ D_DIK_NUMPADENTER

		F1 = 0x3B, // D_DIK_F1
		F2, // D_DIK_F2
		F3, // D_DIK_F3
		F4, // D_DIK_F4
		F5, // D_DIK_F5
		F6, // D_DIK_F6
		F7, // D_DIK_F7
		F8, // D_DIK_F8
		F9, // D_DIK_F9
		F10, // D_DIK_F10
		F11 = 0x57, // D_DIK_F11
		F12, // D_DIK_F12

		Q = 0x10, // D_DIK_Q
		W, // D_DIK_W
		E, // D_DIK_E
		R, // D_DIK_R
		T, // D_DIK_T
		Y, // D_DIK_Y
		U, // D_DIK_U
		I, // D_DIK_I
		O, // D_DIK_O
		P, // D_DIK_P
		A = 0x1E, // D_DIK_A
		S, // D_DIK_S
		D, // D_DIK_D
		F, // D_DIK_F
		G, // D_DIK_G
		H, // D_DIK_H
		J, // D_DIK_J
		K, // D_DIK_K
		L, // D_DIK_L
		Z = 0x2C, // D_DIK_Z
		X, // D_DIK_X
		C, // D_DIK_C
		V, // D_DIK_V
		B, // D_DIK_B
		N, // D_DIK_N
		M, // D_DIK_M 
	};

	bool isKeyDown( Key key );
	Utility::Return_State init();
	Utility::Return_State reloadKey();

private:
	static char current_button[256];
	//static char before_button[256];
};

}