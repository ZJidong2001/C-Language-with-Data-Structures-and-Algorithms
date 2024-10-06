#include <stdio.h>
#include "DoubleList.h"

void menu()
{
	printf("**********************************\n");
	printf("****          双链表          ****\n");
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
	DLNode* plist = DoubleListCreate();

	menu();
	int input = 0;
	int x = 0;
	DLNode* pos = NULL;

	do
	{
		printf("请选择菜单选项:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入你要插入的数据:>");
			scanf("%d", &x);
			DoubleListPushBack(plist, x);
			break;
		case 2:
			DoubleListPopBack(plist);
			break;
		case 3:
			printf("请输入你要插入的数据:>");
			scanf("%d", &x);
			DoubleListPushFront(plist, x);
			break;
		case 4:
			DoubleListPopFront(plist);
			break;
		case 5:
			printf("请输入你要查找的数据:>");
			scanf("%d", &x);
			pos = DoubleListFind(plist, x);
			if (pos == NULL)
				printf("双链表中无该数据\n");
			else
				printf("数据为%d的结点地址为%p\n", pos->data, pos);
			break;
		case 6:
			DoubleListPrint(plist);
			break;
		case 7:
			printf("请输入你要在哪个数据位置插入值:>");
			scanf("%d", &x);
			pos = DoubleListFind(plist, x);
			if (pos == NULL)
			{
				printf("双链表中无该数据，无法在该数据位置插入值\n");
			}
			else
			{
				printf("请输入你要插入的数据:>");
				scanf("%d", &x);
				DoubleListInsert(pos, x);
			}
			break;
		case 8:
			printf("请输入你要删除哪个数据位置的值:>");
			scanf("%d", &x);
			pos = DoubleListFind(plist, x);
			if (pos == NULL)
				printf("双链表中无该数据，无法删除该数据位置的值\n");
			else
				DoubleListErase(pos);
			break;
		case 0:
			printf("程序退出\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);

	DoubleListDestory(plist);
	plist = NULL;

	return 0;
}