#pragma once

#define CIRCLE 3
#define CROSS 5

class first{
public:
	void SetX(int x);
	void SetY(int y);
	void Set(int x, int y);
	void SetCircle();
	void SetCross();
	int GetStatus();
	// void Input();
	void Indicate();
	int Judge();
	int Judge2(int judge_num);

private:
	int objcdn[3][3];
	int cdn_x;
	int cdn_y;
};

