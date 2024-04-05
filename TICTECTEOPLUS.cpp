#include "TICTECTEOCLASS.h"
int main()
{
	tic play;
	play .x, play.y; //보드 칸 좌표
	play. k, play.i; //for 이나 if구문 변수
	//보드의 배열 만들기
	for (int x = 0; x < 3; x++)
		for (int y = 0; y < 3; y++)
			play.board_char_value();
	//보드의 x와 y좌표 받기
	for (play.k = 0; play.k < 9; play.k++) { //9번 반복

		//값 x,y좌표 집어넣기
		play.input();


		//칸이 채워져있는 곳에 넣을때 다시 입력하라는 메세지 출력
		if (play.board[play.x][play.y] == ' ') {
			play.k = play.same_value();
			continue;
		}

		// x와 o 순서 정하기
		play.turn();

		////보드 화면 그리기
		play.draw();
		//for (i = 0; i < 3; i++) {
		//	cout << "---|---|---" << endl;
		//	cout << board[i][0] << "  | " << board[i][1] << " | " << board[i][2] << endl;
		//}
		//cout << "---|---|---" << endl;


		//빙고 계산(1.가로, 2.세로, 3.대각선)

		//1.가로 계산
		//for (int i = 0; i < 3; i++) {
		//	if (board[i][0] == 'x' && board[i][1] == 'x' && board[i][2] == 'x') { // x의 가로빙고 계산
		//		cout << "x가 이겼습니다";  // 승리했다는 문구 출력하고 종료
		//		return 0;
		//	}
		//	else if (board[i][0] == 'o' && board[i][1] == 'o' && board[i][2] == 'o') { //o의 가로빙고 계산
		//		cout << "o가 이겼습니다";
		//		return 0;

		//	}
		//	//2.세로계산
		//	else if (board[0][i] == 'x' && board[1][i] == 'x' && board[2][i] == 'x') { //x의 세로빙고 계산
		//		cout << "x가 이겼습니다";
		//		return 0;
		//	}
		//	else if (board[0][i] == 'o' && board[1][i] == 'o' && board[2][i] == 'o') { //o의 세로빙고 계산
		//		cout << "o가 이겼습니다";
		//		return 0;

		//	}

		//}

		////3.대각선 계산
		//if (board[0][0] == 'x' && board[1][1] == 'x' && board[2][2] == 'x') { //x의 대각선(왼쪽위->오른쪽아래)빙고 계산
		//	cout << "x가 이겼습니다";
		//	return 0;

		//}
		//else if (board[0][0] == 'o' && board[1][1] == 'o' && board[2][2] == 'o') { //o의 대각선(왼쪽위->오른쪽아래)빙고 계산
		//	cout << "o가 이겼습니다";
		//	return 0;

		//}
		//else if (board[2][0] == 'x' && board[1][1] == 'x' && board[0][2] == 'x') {//x의 대각선(오른쪽위->왼쪽아래)빙고 계산
		//	cout << "x가 이겼습니다";
		//	return 0;

		//}
		//else if (board[2][0] == 'o' && board[1][1] == 'o' && board[0][2] == 'o') {//o의 대각선(오른쪽위->왼쪽아래)빙고 계산
		//	cout << "o가 이겼습니다";
		//	return 0;

		//}

		//play.board_calaurate();



	}

	//모든 칸이 채워졌을때 비겼다는 문구 출력
	cout << "비겼습니다" << endl;
	return 0;



}