#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Queue.h"

// 二叉树
typedef char BTDataType;  // 二叉树的存储元素类型

typedef struct BinaryTreeNode
{
	BTDataType data;  // 数据
	struct BinaryTreeNode* lchild;  // 左孩子
	struct BinaryTreeNode* rchild;  // 右孩子
}BTNode;


// 二叉树的接口函数
BTNode* BuyBinaryTreeNode(BTDataType x);  // 动态申请一个节点
void PreOrder(BTNode* root);  // 二叉树前序遍历
void InOrder(BTNode* root);  // 二叉树中序遍历
void PostOrder(BTNode* root);  // 二叉树后序遍历
void LevelOrder(BTNode* root);  // 二叉树层序遍历
int BinaryTreeSize(BTNode* root);  // 二叉树节点个数
int BinaryTreeLeafSize(BTNode* root);  // 二叉树叶子节点个数
int BinaryTreeLevelKSize(BTNode* root, int k);  // 二叉树第k层节点个数
int BinaryTreeDepth(BTNode* root);  // 二叉树深度（高度）
BTNode* BinaryTreeFind(BTNode* root, BTDataType x);  // 二叉树查找值为x的节点
int BinaryTreeComplete(BTNode* root);  // 判断二叉树是否是完全二叉树
void BinaryTreeDestory(BTNode* root);  // 二叉树销毁