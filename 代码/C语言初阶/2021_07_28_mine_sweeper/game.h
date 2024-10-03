#pragma once

#include <stdio.h>
#include <stdlib.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2

#define MINE_COUNT 10

void Game();  // 扫雷游戏的实现逻辑
void InitBoard(char board[ROWS][COLS], int row, int col);  // 初始化棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col);  // 打印棋盘
void SetMine(char Mine[ROWS][COLS], int row, int col);  // 布置雷
int ClearMine(char Mine[ROWS][COLS], char Show[ROWS][COLS], int row, int col);  // 排查雷
int CountMine(char Mine[ROWS][COLS], int x, int y);  // 统计某坐标周围雷的数量