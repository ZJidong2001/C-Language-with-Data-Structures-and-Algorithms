#include "game.h"

void Game()
{
	char flag = 0;

	char board[ROW][COL];
	InitBoard(board, ROW, COL);

	DisplayBoard(board, ROW, COL);

	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		flag = IsWin(board, ROW, COL);
		if (flag != CONTINUE_SHAPE)
			break;

		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		flag = IsWin(board, ROW, COL);
		if (flag != CONTINUE_SHAPE)
			break;
	}

	if (flag == PLAYER_SHAPE)
		printf("玩家赢！\n");
	else if (flag == COMPUTER_SHAPE)
		printf("电脑赢！\n");
	else
		printf("平局！\n");
}

void InitBoard(char board[ROW][COL], int row, int col)
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

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("+---");
		}
		printf("+\n");
		for (j = 0; j < col; j++)
		{
			printf("| %c ", board[i][j]);
		}
		printf("|\n");
	}
	for (j = 0; j < col; j++)
	{
		printf("+---");
	}
	printf("+\n");
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	printf("玩家走:>\n");
	int x = 0, y = 0;
	while (1)
	{
		printf("请输入你要落子的坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = PLAYER_SHAPE;
				break;
			}
			else
			{
				printf("该坐标已被占用，请重新输入！\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入！\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走:>\n");
	int x = 0, y = 0;
	while (1)
	{
		x = rand() % 3;
		y = rand() % 3;
		if (board[x][y] == ' ')
		{
			board[x][y] = COMPUTER_SHAPE;
			break;
		}
	}
}

int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;

	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			return board[i][0];
	}

	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
			return board[0][j];
	}

	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
		return board[0][0];

	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
		return board[0][2];

	if (IsFull(board, row, col))
		return EVEN_SHAPE;

	return CONTINUE_SHAPE;
}