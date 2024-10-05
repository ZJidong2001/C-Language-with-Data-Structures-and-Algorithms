#include <stdio.h>
#include "SeqList.h"

void menu()
{
	printf("**********************************\n");
	printf("****          顺序表          ****\n");
	printf("****   1. 尾插      2. 尾删   ****\n");
	printf("****   3. 头插      4. 头删   ****\n");
	printf("****   5. 查找      6. 打印   ****\n");
	printf("****   7. 在pos位置插入x      ****\n");
	printf("****   8. 删除pos位置的值     ****\n");
	printf("****   0. 退出程序            ****\n");
	printf("**********************************\n");
}

int main()
{
	SL sl;
	SeqListInit(&sl);

	menu();
	int input = 0;
	int x = 0;
	int pos = 0;

	do
	{
		printf("请选择菜单选项:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入你要插入的数据:>");
			scanf("%d", &x);
			SeqListPushBack(&sl, x);
			break;
		case 2:
			SeqListPopBack(&sl);
			break;
		case 3:
			printf("请输入你要插入的数据:>");
			scanf("%d", &x);
			SeqListPushFront(&sl, x);
			break;
		case 4:
			SeqListPopFront(&sl);
			break;
		case 5:
			printf("请输入你要查找的数据:>");
			scanf("%d", &x);
			pos = SeqListFind(&sl, x);
			if (pos == -1)
				printf("顺序表中无该数据\n");
			else
				printf("%d在顺序表中的下标为%d\n", x, pos);
			break;
		case 6:
			SeqListPrint(&sl);
			break;
		case 7:
			printf("请输入你要插入的数据:>");
			scanf("%d", &x);
			printf("请输入你要插入的下标:>");
			scanf("%d", &pos);
			SeqListInsert(&sl, pos, x);
			break;
		case 8:
			printf("请输入你要删除的下标:>");
			scanf("%d", &pos);
			SeqListErase(&sl, pos);
			break;
		case 0:
			printf("程序退出\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);

	SeqListDestroy(&sl);

	return 0;
}