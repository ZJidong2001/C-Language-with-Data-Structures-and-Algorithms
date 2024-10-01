#include <stdio.h>  // stdio - 标准输入输出

//int main()  // 主函数 - 程序的入口 - 有且仅有一个主函数
//{
//	// printf - 输出函数 - C语言库提供的函数 - 需要包含stdio.h头文件
//	printf("hello world\n");  // \n - 换行
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//
//	return 0;  // 程序的出口
//}

//int main(void)  // void - 明确指出main函数不需要参数
//{
//
//	return 0;
//}
//
//int main(int argc, char* argv[])  // main函数可以存在参数
//{
//
//	return 0;
//}
//
//void main()  // 已过时，不推荐使用
//{
//
//}

//int main()  // 数据类型
//{
//	char score = 'A';  // char - 字符型
//	int age = 10;  // int - 整型
//	double weight = 55.5;  // double - 双精度浮点型
//
//	return 0;
//}

//int main()  // 为什么出现这么多的数据类型
//{
//	// sizeof - 计算一个类型创建的变量所占空间的大小
//	printf("%llu\n", sizeof(char));
//	printf("%llu\n", sizeof(short));
//	printf("%llu\n", sizeof(int));
//	printf("%llu\n", sizeof(long));
//	printf("%llu\n", sizeof(long long));
//	printf("%llu\n", sizeof(float));
//	printf("%llu\n", sizeof(double));
//
//	return 0;
//}

//int main()  // 字符 - ASCII码
//{
//	// 在计算机中，abcdef!@#$等字符转换成其所对应的ASCII码（二进制）存储
//
//	char ch = 'e';  // 字符'e'的ASCII码值为101
//
//	printf("%c\n", ch);  // %c - 以字符格式输出
//	printf("%d\n", ch);  // %d - 以十进制整数格式输出
//
//	return 0;
//}

//int main()  // 变量
//{
//	short age = 10;
//	printf("%d\n", age);
//
//	age = 11;  // age是变量，其值可修改
//	printf("%d\n", age);
//
//	return 0;
//}

//int g = 100;  // 全局变量
//
//void test()
//{
//	int b = 1000;  // 局部变量
//}
//
//int main()
//{
//	int a = 10;  // 局部变量
//
//	return 0;
//}

//int a = 100;
//
//int main()  // 全局变量和局部变量同名时，局部变量优先
//{
//	int a = 10;
//	printf("%d\n", a);  // 此处的a为局部变量
//
//	return 0;
//}

int main()  // 两个整数相加
{
	int num1 = 0;  // 创建所需的变量
	int num2 = 0;
	int sum = 0;

	printf("请输入两个整数:>");  // 输入
	scanf("%d%d", &num1, &num2);

	sum = num1 + num2;  // 做加法

	printf("sum = %d\n", sum);  // 输出

	return 0;
}