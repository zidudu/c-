#include "TICTECTEOCLASS.h"
void tic::draw(){

		for (int i=0;i<3; i++) {
			
			cout << width_board*3 << height_board<<width_board*3<<endl;
			cout << board[i][0] << height_board<< board[i][1] << height_board << board[i][2] << endl;

		}
		cout << width_board*3 << height_board << width_board *3<< endl;



}
void tic::input() {
	cout << "(x, y)��ǥ�� �Է��ϼ���: ";
	cin >> y >> x;
	

}
void tic::turn() {

	// x�� o ���� ���ϱ�
	if (k % 2 == 0) //k�� ¦���̸� x�� k�� Ȧ���̸� o�� ����
		board[x][y] = 'x';
	else
		board[x][y] = 'o';


}
int tic::same_value(){
	cout << "�ٽ� �Է��ϼ���" << endl;
	return k--;



}
void tic::board_char_value() {
	board[3][3] = ' ';
}


int tic::board_calaurate() {
	////������ x�� y��ǥ �ޱ�
	//for (k = 0; k < 9; k++) { //9�� �ݺ�
	//	cout << "(x, y)��ǥ�� �Է��ϼ���: ";
	//	cin >> y >> x;


		////ĭ�� ä�����ִ� ���� ������ �ٽ� �Է��϶�� �޼��� ���
		//if (board[x][y] != ' ') {
		//	cout << "�ٽ� �Է��ϼ���" << endl;
		//	k--;
		//	continue;
		//}

		//// x�� o ���� ���ϱ�
		//if (k % 2 == 0) //k�� ¦���̸� x�� k�� Ȧ���̸� o�� ����
		//	board[x][y] = 'x';
		//else
		//	board[x][y] = 'o';

		////���� ȭ�� �׸���
		//for (i = 0; i < 3; i++) {
		//	cout << "---|---|---" << endl;
		//	cout << board[i][0] << "  | " << board[i][1] << " | " << board[i][2] << endl;
		//}
		//cout << "---|---|---" << endl;


		//���� ���(1.����, 2.����, 3.�밢��)

		//1.���� ���
		for (int i = 0; i < 3; i++) {
			if (board[i][0] == 'x' && board[i][1] == 'x' && board[i][2] == 'x') { // x�� ���κ��� ���
				cout << "x�� �̰���ϴ�";  // �¸��ߴٴ� ���� ����ϰ� ����
				return 0;
			}
			else if (board[i][0] == 'o' && board[i][1] == 'o' && board[i][2] == 'o') { //o�� ���κ��� ���
				cout << "o�� �̰���ϴ�";
				//return 0;

			}
			//2.���ΰ��
			else if (board[0][i] == 'x' && board[1][i] == 'x' && board[2][i] == 'x') { //x�� ���κ��� ���
				cout << "x�� �̰���ϴ�";
				//return 0;
			}
			else if (board[0][i] == 'o' && board[1][i] == 'o' && board[2][i] == 'o') { //o�� ���κ��� ���
				cout << "o�� �̰���ϴ�";
				//return 0;

			}

		}

		//3.�밢�� ���
		if (board[0][0] == 'x' && board[1][1] == 'x' && board[2][2] == 'x') { //x�� �밢��(������->�����ʾƷ�)���� ���
			cout << "x�� �̰���ϴ�";
			//return 0;

		}
		else if (board[0][0] == 'o' && board[1][1] == 'o' && board[2][2] == 'o') { //o�� �밢��(������->�����ʾƷ�)���� ���
			cout << "o�� �̰���ϴ�";
			//return 0;

		}
		else if (board[2][0] == 'x' && board[1][1] == 'x' && board[0][2] == 'x') {//x�� �밢��(��������->���ʾƷ�)���� ���
			cout << "x�� �̰���ϴ�";
			//return 0;

		}
		else if (board[2][0] == 'o' && board[1][1] == 'o' && board[0][2] == 'o') {//o�� �밢��(��������->���ʾƷ�)���� ���
			cout << "o�� �̰���ϴ�";
			//return 0;

		}
	}

