#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// 栈
typedef int StackDataType;  // 栈的存储元素类型

typedef struct Stack
{
	StackDataType* data;  // 使用动态开辟的数组存储元素
	int top;  // 栈顶指针
	int capacity;  // 栈的最大容量
}Stack;


// 栈的接口函数
void StackInit(Stack* ps);  // 初始化栈
void StackPush(Stack* ps, StackDataType x);  // 入栈
void StackPop(Stack* ps);  // 出栈
StackDataType StackTop(Stack* ps);  // 获取栈顶元素
int StackSize(Stack* ps);  // 获取栈中有效元素个数
int StackEmpty(Stack* ps);  // 检测栈是否为空，如果为空返回非零结果，如果不为空返回0
void StackDestroy(Stack* ps);  // 销毁栈