#include "TICTECTEOCLASS.h"
void tic::draw(){

		for (int i=0;i<3; i++) {
			
			cout << width_board*3 << height_board<<width_board*3<<endl;
			cout << board[i][0] << height_board<< board[i][1] << height_board << board[i][2] << endl;

		}
		cout << width_board*3 << height_board << width_board *3<< endl;



}
void tic::input() {
	cout << "(x, y)좌표를 입력하세요: ";
	cin >> y >> x;
	

}
void tic::turn() {

	// x와 o 순서 정하기
	if (k % 2 == 0) //k가 짝수이면 x값 k가 홀수이면 o값 가짐
		board[x][y] = 'x';
	else
		board[x][y] = 'o';


}
int tic::same_value(){
	cout << "다시 입력하세요" << endl;
	return k--;



}
void tic::board_char_value() {
	board[3][3] = ' ';
}


int tic::board_calaurate() {
	////보드의 x와 y좌표 받기
	//for (k = 0; k < 9; k++) { //9번 반복
	//	cout << "(x, y)좌표를 입력하세요: ";
	//	cin >> y >> x;


		////칸이 채워져있는 곳에 넣을때 다시 입력하라는 메세지 출력
		//if (board[x][y] != ' ') {
		//	cout << "다시 입력하세요" << endl;
		//	k--;
		//	continue;
		//}

		//// x와 o 순서 정하기
		//if (k % 2 == 0) //k가 짝수이면 x값 k가 홀수이면 o값 가짐
		//	board[x][y] = 'x';
		//else
		//	board[x][y] = 'o';

		////보드 화면 그리기
		//for (i = 0; i < 3; i++) {
		//	cout << "---|---|---" << endl;
		//	cout << board[i][0] << "  | " << board[i][1] << " | " << board[i][2] << endl;
		//}
		//cout << "---|---|---" << endl;


		//빙고 계산(1.가로, 2.세로, 3.대각선)

		//1.가로 계산
		for (int i = 0; i < 3; i++) {
			if (board[i][0] == 'x' && board[i][1] == 'x' && board[i][2] == 'x') { // x의 가로빙고 계산
				cout << "x가 이겼습니다";  // 승리했다는 문구 출력하고 종료
				return 0;
			}
			else if (board[i][0] == 'o' && board[i][1] == 'o' && board[i][2] == 'o') { //o의 가로빙고 계산
				cout << "o가 이겼습니다";
				//return 0;

			}
			//2.세로계산
			else if (board[0][i] == 'x' && board[1][i] == 'x' && board[2][i] == 'x') { //x의 세로빙고 계산
				cout << "x가 이겼습니다";
				//return 0;
			}
			else if (board[0][i] == 'o' && board[1][i] == 'o' && board[2][i] == 'o') { //o의 세로빙고 계산
				cout << "o가 이겼습니다";
				//return 0;

			}

		}

		//3.대각선 계산
		if (board[0][0] == 'x' && board[1][1] == 'x' && board[2][2] == 'x') { //x의 대각선(왼쪽위->오른쪽아래)빙고 계산
			cout << "x가 이겼습니다";
			//return 0;

		}
		else if (board[0][0] == 'o' && board[1][1] == 'o' && board[2][2] == 'o') { //o의 대각선(왼쪽위->오른쪽아래)빙고 계산
			cout << "o가 이겼습니다";
			//return 0;

		}
		else if (board[2][0] == 'x' && board[1][1] == 'x' && board[0][2] == 'x') {//x의 대각선(오른쪽위->왼쪽아래)빙고 계산
			cout << "x가 이겼습니다";
			//return 0;

		}
		else if (board[2][0] == 'o' && board[1][1] == 'o' && board[0][2] == 'o') {//o의 대각선(오른쪽위->왼쪽아래)빙고 계산
			cout << "o가 이겼습니다";
			//return 0;

		}
	}

