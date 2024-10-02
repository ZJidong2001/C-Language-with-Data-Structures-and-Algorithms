#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//void menu()  // 选择菜单
//{
//	printf("**************************\n");
//	printf("*******   1. play   ******\n");
//	printf("*******   0. exit   ******\n");
//	printf("**************************\n");
//}
//
//void game()  // 猜数字游戏的实现逻辑
//{
//	// 1. 生成一个随机数（1-100）
//	int ret = rand() % 100 + 1;
//
//	// 2. 猜数字
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了！\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了！\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了！\n");
//			break;
//		}
//	}
//}
//
//int main()  // 猜数字游戏
//{
//	srand((unsigned int)time(NULL));  // 设置随机数的生成起点，以时间戳作为参数
//
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏！\n");
//			break;
//		default:
//			printf("选择错误，重新选择!\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//int main()  // 写代码将三个整数按从大到小输出
//{
//	int a = 0, b = 0, c = 0;
//	int tmp = 0;
//
//	scanf("%d%d%d", &a, &b, &c);  // 输入
//
//	if (a < b)  // 调整
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//	printf("%d %d %d\n", a, b, c);  // 输出
//
//	return 0;
//}

//int main()  // 写一个代码打印1-100之间所有3的倍数的数字
//{
//	int i = 0;  // 法一
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)  // 判断i是否为3的倍数
//			printf("%d ", i);
//	}
//
//	printf("\n");
//
//	int j = 0;  // 法二
//	for (j = 3; j <= 100; j += 3)
//	{
//		printf("%d ", j);
//	}
//
//	return 0;
//}

//int main()  // 给定两个数，求这两个数的最大公约数
//{
//	int num1 = 0, num2 = 0;
//	scanf("%d%d", &num1, &num2);
//
//	int min = (num1 < num2 ? num1 : num2);  // 法一（暴力求解）
//	while (1)
//	{
//		if (num1 % min == 0 && num2 % min == 0)
//		{
//			printf("最大公约数是：%d\n", min);
//			break;
//		}
//		min--;
//	}
//
//	int r = 0;  // 法二（辗转相除法）
//	while (r = num1 % num2)
//	{
//		num1 = num2;
//		num2 = r;
//	}
//	printf("最大公约数是：%d\n", num2);
//
//	return 0;
//}

//int main()  // 打印1000年到2000年之间的闰年
//{
//	int year = 0;
//
//	for (year = 1000; year <= 2000; year++)  // 法一
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//			printf("%d ", year);
//		else if (year % 400 == 0)
//			printf("%d ", year);
//	}
//
//	printf("\n");
//
//	for (year = 1000; year <= 2000; year++)  // 法二
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//			printf("%d ", year);
//		if (year % 400 == 0)
//			printf("%d ", year);
//	}
//
//	printf("\n");
//
//	for (year = 1000; year <= 2000; year++)  // err
//	{
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//				printf("%d ", year);
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//
//	printf("\n");
//
//	for (year = 1000; year <= 2000; year++)  // 法三
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//			printf("%d ", year);
//	}
//
//	return 0;
//}

//int main()  // 写一个代码：打印100-200之间的素数
//{
//	int i = 0;
//
//	for (i = 100; i <= 200; i++)  // 法一（2-i-1试除i）
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//			printf("%d ", i);
//	}
//
//	printf("\n");
//
//	for (i = 100; i <= 200; i++)  // 法二（2-sqrt(i)试除i）
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//			printf("%d ", i);
//	}
//
//	printf("\n");
//
//	for (i = 101; i < 200; i += 2)  // 法三（2-sqrt(i)试除奇数i）
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//			printf("%d ", i);
//	}
//
//	return 0;
//}

//int main()  // 编写程序数一下1到100的所有整数中出现多少个数字9
//{
//	int count = 0;
//
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//
//	printf("%d\n", count);
//
//	return 0;
//}

//int main()  // 计算 1/1 - 1/2 + 1/3 - 1/4 + 1/5 - ... + 1/99 - 1/100 的值，打印出结果
//{
//	double ret = 0.0;
//	int flag = 1;
//
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		ret += flag * (1.0 / i);
//		flag = -flag;
//	}
//
//	printf("%lf\n", ret);
//
//	return 0;
//}

//int main()  // 求10个整数中最大值
//{
//	int arr[10] = { 0 };
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int max = arr[0];  // 假设首元素是最大值（不能设max为0，若10个整数全为负数结果错误）
//
//	for (i = 1; i < 10; i++) // 剩余9个值和max比较
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//
//	printf("%d\n", max);
//
//	return 0;
//}

int main()  // 在屏幕上输出9*9乘法口诀表
{
	int i = 0, j = 0;
	for (i = 1; i <= 9; i++)  // 行
	{
		for (j = 1; j <= i; j++)  // 列
			printf("%d*%d=%-2d ", j, i, i * j);
		printf("\n");
	}

	return 0;
}