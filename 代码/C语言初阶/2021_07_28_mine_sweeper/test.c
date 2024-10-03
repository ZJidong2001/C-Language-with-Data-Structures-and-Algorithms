#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"

void menu()
{
	printf("************************\n");
	printf("****  Mine Sweeper  ****\n");
	printf("****     1.Play     ****\n");
	printf("****     0.Exit     ****\n");
	printf("************************\n");
}

int main()
{
	srand((unsigned int)time(NULL));

	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Game();
			break;
		case 0:
			printf("游戏退出！\n");
			break;
		default:
			printf("选择错误，请重新选择！\n");
			break;
		}
	} while (input);

	return 0;
}