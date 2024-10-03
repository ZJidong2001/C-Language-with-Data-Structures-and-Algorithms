#include "game.h"

void Game()
{
	char Mine[ROWS][COLS];
	char Show[ROWS][COLS];

	InitBoard(Mine, ROWS, COLS);
	InitBoard(Show, ROWS, COLS);

	SetMine(Mine, ROW, COL);

	int NotMine = ROW * COL - MINE_COUNT;
	while (NotMine > 0)
	{
		DisplayBoard(Show, ROW, COL);
		if (ClearMine(Mine, Show, ROW, COL))
		{
			NotMine--;
		}
		else
		{
			break;
		}
	}

	if (NotMine > 0)
		printf("糟糕，你被炸死了！\n");
	else
		printf("恭喜你，排雷成功！\n");

	DisplayBoard(Mine, ROW, COL);
}

void InitBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0, j = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			printf("+---");
		}
		printf("+\n");
		for (j = 1; j <= col; j++)
		{
			printf("| %c ", board[i][j]);
		}
		printf("|\n");
	}
	for (j = 1; j <= col; j++)
	{
		printf("+---");
	}
	printf("+\n");
}

void SetMine(char Mine[ROWS][COLS], int row, int col)
{
	int x = 0, y = 0;
	int count = 0;
	while (count < MINE_COUNT)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (Mine[x][y] != '*')
		{
			Mine[x][y] = '*';
			count++;
		}
	}
}

int ClearMine(char Mine[ROWS][COLS], char Show[ROWS][COLS], int row, int col)
{
	int x = 0, y = 0;
	while (1)
	{
		printf("请输入你认为不是雷的坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (Mine[x][y] == '*')
			{
				return 0;
			}
			else
			{
				Show[x][y] = '0' + CountMine(Mine, x, y);
				return 1;
			}
		}
		else
		{
			printf("坐标非法，请重新输入！\n");
		}
	}
}

int CountMine(char Mine[ROWS][COLS], int x, int y)
{
	int count = 0;
	int i = 0, j = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (Mine[i][j] == '*')
				count++;
		}
	}
	return count;
}