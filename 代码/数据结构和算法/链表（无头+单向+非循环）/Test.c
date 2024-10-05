#include <stdio.h>
#include "SingleList.h"

void menu()
{
	printf("**********************************\n");
	printf("****          单链表          ****\n");
	printf("****   1. 尾插      2. 尾删   ****\n");
	printf("****   3. 头插      4. 头删   ****\n");
	printf("****   5. 查找      6. 打印   ****\n");
	printf("****   7. 在pos位置之后插入x  ****\n");
	printf("****   8. 删除pos位置之后的值 ****\n");
	printf("****   0. 退出程序            ****\n");
	printf("**********************************\n");
}

int main()
{
	SLNode* plist = NULL;

	menu();
	int input = 0;
	int x = 0;
	int count = 0;
	SLNode* pos = NULL;

	do
	{
		printf("请选择菜单选项:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入你要插入的数据:>");
			scanf("%d", &x);
			SingleListPushBack(&plist, x);
			break;
		case 2:
			SingleListPopBack(&plist);
			break;
		case 3:
			printf("请输入你要插入的数据:>");
			scanf("%d", &x);
			SingleListPushFront(&plist, x);
			break;
		case 4:
			SingleListPopFront(&plist);
			break;
		case 5:
			printf("请输入你要查找的数据:>");
			scanf("%d", &x);
			pos = SingleListFind(plist, x);
			if (pos == NULL)
			{
				printf("单链表中无该数据\n");
			}
			else
			{
				count = 1;
				while (pos != NULL)
				{
					printf("第%d个数据为%d的结点地址为%p\n", count++, pos->data, pos);
					pos = SingleListFind(pos->next, x);
				}
			}
			break;
		case 6:
			SingleListPrint(plist);
			break;
		case 7:
			printf("请输入你要在哪个数据之后插入值:>");
			scanf("%d", &x);
			pos = SingleListFind(plist, x);
			if (pos == NULL)
			{
				printf("单链表中无该数据，无法在该数据之后插入值\n");
			}
			else
			{
				printf("请输入你要插入的数据:>");
				scanf("%d", &x);
				SingleListInsertAfter(pos, x);
			}
			break;
		case 8:
			printf("请输入你要删除哪个数据之后的值:>");
			scanf("%d", &x);
			pos = SingleListFind(plist, x);
			if (pos == NULL)
				printf("单链表中无该数据，无法删除该数据之后的值\n");
			else
				SingleListEraseAfter(pos);
			break;
		case 0:
			printf("程序退出\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);

	SingleListDestroy(&plist);

	return 0;
}