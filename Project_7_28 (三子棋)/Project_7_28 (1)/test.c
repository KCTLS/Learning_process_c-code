#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu()
{
	printf("############################\n");
	printf("########1.play   0.exit#####\n");
	printf("############################\n");
}
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
	    ret=IsWin(board,ROW,COL);         /////////////////////////////���Ӯ-��*�� ����Ӯ-��#��  ƽ��-��Q�� ����-��C��
		if (ret != 'C')
		{
			break;
		}
	    ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret=IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}
void test ()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������,��Ϸ��ʼ\n");
			game();			
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("�����������������\n");
			break;
		}
		
	}

	 while (input);
}
int main()
{
	test();
	return 0;
}