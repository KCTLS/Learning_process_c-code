#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu()
{
	printf("######################\n");
	printf("#####1.play  0.exit###\n");
	printf("######################\n");
}

void game()
{
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board,ROW,COL);
}
void test()
{
	int input = 0;
	do{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("�����壬��Ϸ��ʼ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��");
			break;


		}
	} while (input);
}
int main()
{
	test();
	return 0;
}