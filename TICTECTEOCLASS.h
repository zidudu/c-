#include <iostream>
using namespace std;
#include <string>

class tic{
public:
	char board[3][3]; //���� ĭ�� ���ڿ��� ������
	int x, y; //���� ĭ ��ǥ
	int k, i; //for �̳� if���� ����

	//���� �׸��� ����
	char width_board = '-';
	char height_board = '|';
	//���� ǥ���Լ�
	void draw();

	//���� ��� �Լ�
	int board_calaurate();

	//��ǥ �Է� �Լ�
	void input();

	//���� ���ϴ� �Լ�
	void turn();

	//�ٽ� �Է��϶�� �Լ�
	int same_value();

	void board_char_value();

};