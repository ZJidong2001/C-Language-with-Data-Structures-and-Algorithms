#include <stdio.h>
#include "Queue.h"

void menu()
{
	printf("****************************************\n");
	printf("****              队列              ****\n");
	printf("****      1. 入队      2. 出队      ****\n");
	printf("****      3. 获取队头元素           ****\n");
	printf("****      4. 获取队尾元素           ****\n");
	printf("****      5. 获取队列中有效元素个数 ****\n");
	printf("****      6. 清空队列数据           ****\n");
	printf("****      0. 退出程序               ****\n");
	printf("****************************************\n");
}

int main()
{
	Queue q;
	QueueInit(&q);

	menu();
	int input = 0;
	int x = 0;

	do
	{
		printf("请选择菜单选项:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入你要入队的数据:>");
			scanf("%d", &x);
			QueuePush(&q, x);
			break;
		case 2:
			QueuePop(&q);
			break;
		case 3:
			printf("队头元素数据为%d\n", QueueFront(&q));
			break;
		case 4:
			printf("队尾元素数据为%d\n", QueueBack(&q));
			break;
		case 5:
			printf("队列中有效元素个数为%d\n", QueueSize(&q));
			break;
		case 6:
			printf("队列清空数据为：");
			while (!QueueEmpty(&q))
			{
				printf("%d ", QueueFront(&q));
				QueuePop(&q);
			}
			printf("\n");
			break;
		case 0:
			printf("程序退出\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);

	QueueDestroy(&q);

	return 0;
}