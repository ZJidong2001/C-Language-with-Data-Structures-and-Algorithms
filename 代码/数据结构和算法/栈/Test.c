#include <stdio.h>
#include "Stack.h"

void menu()
{
	printf("**********************************\n");
	printf("****            栈            ****\n");
	printf("****   1. 入栈      2. 出栈   ****\n");
	printf("****   3. 获取栈顶元素        ****\n");
	printf("****   4. 获取栈中有效元素个数****\n");
	printf("****   5. 清空栈内数据        ****\n");
	printf("****   0. 退出程序            ****\n");
	printf("**********************************\n");
}

int main()
{
	Stack st;
	StackInit(&st);

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
			printf("请输入你要入栈的数据:>");
			scanf("%d", &x);
			StackPush(&st, x);
			break;
		case 2:
			StackPop(&st);
			break;
		case 3:
			printf("栈顶元素数据为%d\n", StackTop(&st));
			break;
		case 4:
			printf("栈中有效元素个数为%d\n", StackSize(&st));
			break;
		case 5:
			printf("栈内清空数据为：");
			while (!StackEmpty(&st))
			{
				printf("%d ", StackTop(&st));
				StackPop(&st);
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

	StackDestroy(&st);

	return 0;
}