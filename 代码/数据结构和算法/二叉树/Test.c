#include <stdio.h>
#include "BinaryTree.h"

BTNode* CreateBinaryTree()
{
	BTNode* nodeA = BuyBinaryTreeNode('A');
	BTNode* nodeB = BuyBinaryTreeNode('B');
	BTNode* nodeC = BuyBinaryTreeNode('C');
	BTNode* nodeD = BuyBinaryTreeNode('D');
	BTNode* nodeE = BuyBinaryTreeNode('E');
	BTNode* nodeF = BuyBinaryTreeNode('F');

	nodeA->lchild = nodeB;
	nodeA->rchild = nodeC;
	nodeB->lchild = nodeD;
	nodeC->lchild = nodeE;
	nodeC->rchild = nodeF;

	return nodeA;
}

int main()
{
	BTNode* root = CreateBinaryTree();

	PreOrder(root);
	printf("\n");

	InOrder(root);
	printf("\n");

	PostOrder(root);
	printf("\n");

	LevelOrder(root);
	printf("\n");

	printf("二叉树节点个数：%d\n", BinaryTreeSize(root));

	printf("二叉树叶子节点个数：%d\n", BinaryTreeLeafSize(root));

	printf("二叉树第3层节点个数：%d\n", BinaryTreeLevelKSize(root, 3));

	printf("二叉树深度（高度）：%d\n", BinaryTreeDepth(root));

	BTNode* findnode = BinaryTreeFind(root, 'C');
	printf("二叉树查找值为'C'的节点，值为%c，地址为%p\n", findnode->data, findnode);

	printf("判断二叉树是否是完全二叉树：%d\n", BinaryTreeComplete(root));

	BinaryTreeDestory(root);
	root = NULL;

	return 0;
}