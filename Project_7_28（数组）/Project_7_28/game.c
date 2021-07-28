#define _CRT_SECURE_NO_WARNINGS
#include "game.h"


void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
			board[i][j] = ' ';
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for(i = 0; i < row; i++)
	{
		printf(" %c ", board[i][j]);
		if (i<row-1)
		printf("|");
	}
	printf("\n");
	if (i < row - 1)
		for (j = 0; j < col; j++)
		{
		printf("___");
		if (j<col-1)
		printf("|");
		printf("\n");
		}
	
}