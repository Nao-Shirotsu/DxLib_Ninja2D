#include "stdafx.h"
#include "first.h"
#include <iostream>

void first::SetX(int x) {

	cdn_x = x;

}
void first::SetY(int y) {

	cdn_y = y;

}
void first::Set(int x, int y) {

	SetX(x);
	SetY(y);

	std::cout << "\n" << x << " " << y << std::endl;

}

void first::SetCircle() {

	objcdn[cdn_x - 1][cdn_y - 1] = CIRCLE;

}

void first::SetCross() {

	objcdn[cdn_x - 1][cdn_y - 1] = CROSS;

}

int first::GetStatus() {

	return objcdn[cdn_x - 1][cdn_y - 1];
}

/*
void first::Input() {

	std::cout << "占領したいマスの座標を入力してください：";

	std::cin >> cdn_x;
	std::cin >> cdn_y;

}
*/

void first::Indicate() {
	using namespace std;

	cout << "\n************" << endl;

	for (int i = 0; i <= 2; i++) {
	
		cout << "*";

		for (int j = 0; j <= 2; j++) {
		
			cout << " ";

			if (objcdn[i][j] == CROSS) {
			
				cout << "x ";
			
			}else if (objcdn[i][j] == CIRCLE) {
			
				cout << "o ";
			
			}else {
			
				cout << "- ";
			
			}
		
		}

		cout << " *\n*          *" << endl;
	
	}

	cout << "************\n" << endl;

}

int first::Judge() {

	int judge_num = 0;
	int judge = 0;

	int i;
	int j = 0;

	for (i = 0; i <= 2; i++) { //右下がりのナナメ
	
		judge_num += objcdn[i][i];
	
	}

	judge = Judge2(judge_num);

	if (judge) {
	
		return judge;

	}
	else {
	
		judge_num = 0;
	
	}

	judge_num += objcdn[0][2];
	std::cout << objcdn[0][2] << std::ends;
	judge_num += objcdn[1][1];
	std::cout << objcdn[1][1] << std::ends;
	judge_num += objcdn[2][0]; //右上がりのナナメ
	std::cout << objcdn[2][0] << std::ends;

	judge = Judge2(judge_num);

	if (judge) {

		return judge;

	}
	else {

		judge_num = 0;

	}

	while (j < 3) {//ヨコ

		for (i = 0; i <= 2; i++) {

			judge_num += objcdn[i][j];

		}

		judge = Judge2(judge_num);

		if (judge) {

			return judge;

		}
		else {

			judge_num = 0;
			j++;

		}
	}

	j = 0;

	while (j < 3) {//タテ

		for (i = 0; i <= 2; i++) {

			judge_num += objcdn[j][i];

		}

		judge = Judge2(judge_num);

		if (judge) {

			return judge;

		}
		else {

			judge_num = 0;
			j++;

		}

	}

	return judge;
}

int first::Judge2(int num) {

	if (num == 9) {

		return CIRCLE;

	}
	else if (num == 15) {

		return CROSS;

	}
	else {

		return 0;

	}

}