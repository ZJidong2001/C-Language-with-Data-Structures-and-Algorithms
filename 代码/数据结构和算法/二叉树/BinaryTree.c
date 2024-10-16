#include "BinaryTree.h"

BTNode* BuyBinaryTreeNode(BTDataType x)  // 动态申请一个节点
{
	BTNode* newnode = (BTNode*)malloc(sizeof(BTNode));
	if (newnode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	newnode->data = x;
	newnode->lchild = newnode->rchild = NULL;
	return newnode;
}

void PreOrder(BTNode* root)  // 二叉树前序遍历
{
	if (root == NULL)
		return;
	printf("%c ", root->data);
	PreOrder(root->lchild);
	PreOrder(root->rchild);
}

void InOrder(BTNode* root)  // 二叉树中序遍历
{
	if (root == NULL)
		return;
	InOrder(root->lchild);
	printf("%c ", root->data);
	InOrder(root->rchild);
}

void PostOrder(BTNode* root)  // 二叉树后序遍历
{
	if (root == NULL)
		return;
	PostOrder(root->lchild);
	PostOrder(root->rchild);
	printf("%c ", root->data);
}

void LevelOrder(BTNode* root)  // 二叉树层序遍历
{
	if (root == NULL)
		return;
	Queue q;
	QueueInit(&q);
	QueuePush(&q, root);
	while (!QueueEmpty(&q))
	{
		BTNode* node = QueueFront(&q);
		QueuePop(&q);
		printf("%c ", node->data);
		if (node->lchild != NULL)
			QueuePush(&q, node->lchild);
		if (node->rchild != NULL)
			QueuePush(&q, node->rchild);
	}
	QueueDestroy(&q);
}

int BinaryTreeSize(BTNode* root)  // 二叉树节点个数
{
	return root == NULL ? 0 : 1 + BinaryTreeSize(root->lchild) + BinaryTreeSize(root->rchild);
}

int BinaryTreeLeafSize(BTNode* root)  // 二叉树叶子节点个数
{
	if (root == NULL)
		return 0;
	if (root->lchild == NULL && root->rchild == NULL)
		return 1;
	return BinaryTreeLeafSize(root->lchild) + BinaryTreeLeafSize(root->rchild);
}

int BinaryTreeLevelKSize(BTNode* root, int k)  // 二叉树第k层节点个数
{
	assert(k >= 1);
	if (root == NULL)
		return 0;
	if (k == 1)
		return 1;
	return BinaryTreeLevelKSize(root->lchild, k - 1) + BinaryTreeLevelKSize(root->rchild, k - 1);
}

int BinaryTreeDepth(BTNode* root)  // 二叉树深度（高度）
{
	if (root == NULL)
		return 0;
	int leftDepth = BinaryTreeDepth(root->lchild);
	int rightDepth = BinaryTreeDepth(root->rchild);
	return leftDepth > rightDepth ? 1 + leftDepth : 1 + rightDepth;
}

BTNode* BinaryTreeFind(BTNode* root, BTDataType x)  // 二叉树查找值为x的节点
{
	if (root == NULL)
		return NULL;
	if (root->data == x)
		return root;
	BTNode* leftRet = BinaryTreeFind(root->lchild, x);
	if (leftRet != NULL)
		return leftRet;
	BTNode* rightRet = BinaryTreeFind(root->rchild, x);
	if (rightRet != NULL)
		return rightRet;
	return NULL;
}

int BinaryTreeComplete(BTNode* root)  // 判断二叉树是否是完全二叉树
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, root);
	while (!QueueEmpty(&q))
	{
		BTNode* node = QueueFront(&q);
		QueuePop(&q);
		if (node == NULL)
			break;
		QueuePush(&q, node->lchild);
		QueuePush(&q, node->rchild);
	}
	while (!QueueEmpty(&q))
	{
		BTNode* node = QueueFront(&q);
		QueuePop(&q);
		if (node != NULL)
		{
			QueueDestroy(&q);
			return 0;
		}
	}
	QueueDestroy(&q);
	return 1;
}

void BinaryTreeDestory(BTNode* root)  // 二叉树销毁
{
	if (root == NULL)
		return;
	BinaryTreeDestory(root->lchild);
	BinaryTreeDestory(root->rchild);
	free(root);
	root = NULL;
}