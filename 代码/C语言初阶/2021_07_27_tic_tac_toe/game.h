#pragma once

#include <stdio.h>
#include <stdlib.h>

#define ROW 3
#define COL 3

#define PLAYER_SHAPE 'x'
#define COMPUTER_SHAPE 'o'
#define EVEN_SHAPE 'e'
#define CONTINUE_SHAPE 'c'

void Game();  // 三子棋游戏的实现逻辑
void InitBoard(char board[ROW][COL], int row, int col);  // 初始化棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);  // 打印棋盘
void PlayerMove(char board[ROW][COL], int row, int col);  // 玩家下棋
void ComputerMove(char board[ROW][COL], int row, int col);  // 电脑下棋
int IsFull(char board[ROW][COL], int row, int col);  // 判断棋盘是否已满
char IsWin(char board[ROW][COL], int row, int col);  // 判断当前游戏状态