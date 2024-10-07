#include "Stack.h"

void StackInit(Stack* ps)  // 初始化栈
{
	assert(ps);
	ps->data = NULL;
	ps->top = 0;
	ps->capacity = 0;
}

void StackPush(Stack* ps, StackDataType x)  // 入栈
{
	assert(ps);
	if (ps->top == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		StackDataType* tmp = (StackDataType*)realloc(ps->data, sizeof(StackDataType) * newcapacity);
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		ps->data = tmp;
		ps->capacity = newcapacity;
	}
	ps->data[ps->top] = x;
	ps->top++;
}

void StackPop(Stack* ps)  // 出栈
{
	assert(ps);
	assert(ps->top > 0);
	ps->top--;
}

StackDataType StackTop(Stack* ps)  // 获取栈顶元素
{
	assert(ps);
	assert(!StackEmpty(ps));
	return ps->data[ps->top - 1];
}

int StackSize(Stack* ps)  // 获取栈中有效元素个数
{
	assert(ps);
	return ps->top;
}

int StackEmpty(Stack* ps)  // 检测栈是否为空，如果为空返回非零结果，如果不为空返回0
{
	assert(ps);
	return ps->top == 0;
}

void StackDestroy(Stack* ps)  // 销毁栈
{
	assert(ps);
	free(ps->data);
	ps->data = NULL;
	ps->top = ps->capacity = 0;
}