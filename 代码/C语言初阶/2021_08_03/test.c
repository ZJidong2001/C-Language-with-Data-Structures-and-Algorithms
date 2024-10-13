#include <stdio.h>

//void test()
//{
//	printf("hehe\n");
//}
//
//int main()  // 熟悉调试快捷键和调试窗口
//{
//	int arr[10] = { 0 };
//	int i = 0;
//
//	test();
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i + 1;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//void test2()
//{
//    printf("test2\n");
//}
//void test1()
//{
//    test2();
//}
//void test()
//{
//    test1();
//}
//int main()  // 调用堆栈窗口
//{
//    test();
//    return 0;
//}

//int main()  // 调试实例一
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//
//	int i = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		//ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//	return 0;
//}

//int main()  // 调试实例二
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()  // 编译型错误
//{
//	printf("hehe\n")
//	return 0;
//}

//int ADd(int x, int y)
//{
//	return x + y;
//}
//
//int main()  // 链接型错误
//{
//	int ret = Add(2, 3);
//
//	printf("%d\n", ret);
//
//	return 0;
//}

int Add(int x, int y)
{
	return x + y + 1;
}

int main()  // 运行时错误
{
	int ret = Add(2, 3);

	printf("%d\n", ret);

	return 0;
}