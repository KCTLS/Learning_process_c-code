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
	    ret=IsWin(board,ROW,COL);         /////////////////////////////玩家赢-‘*’ 电脑赢-‘#’  平局-‘Q’ 继续-‘C’
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
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}
void test ()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋,游戏开始\n");
			game();			
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("输入错误，请重新输入\n");
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