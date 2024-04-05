#include <iostream>
using namespace std;
#include <string>

class tic{
public:
	char board[3][3]; //보드 칸에 문자열을 저장함
	int x, y; //보드 칸 좌표
	int k, i; //for 이나 if구문 변수

	//보드 그리기 변수
	char width_board = '-';
	char height_board = '|';
	//보드 표시함수
	void draw();

	//보드 계산 함수
	int board_calaurate();

	//좌표 입력 함수
	void input();

	//순서 정하는 함수
	void turn();

	//다시 입력하라는 함수
	int same_value();

	void board_char_value();

};