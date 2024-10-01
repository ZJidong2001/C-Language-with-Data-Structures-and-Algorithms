#include <stdio.h>
#include <string.h>

//int main()  // 一个工程里有且仅有一个main函数
//{
//	printf("hehe\n");
//	return 0;
//}

//int a = 100;  // 全局变量
//
//void test()
//{
//	printf("%d\n", a);  // 没有局部变量时，使用全局变量 - 100
//}
//
//int main()
//{
//	int a = 10;  // 局部变量
//	printf("%d\n", a);  // 局部优先 - 10
//	a = 20;
//	printf("%d\n", a);  // 局部优先 - 20
//	test();
//
//	return 0;
//}

//int main()  // 局部变量的作用域 - 局部变量所在的局部范围
//{
//	int a = 100;
//	{
//		int b = 10;
//		printf("a = %d\n", a);
//		printf("b = %d\n", b);
//	}
//	printf("a = %d\n", a);
//
//	return 0;
//}

//int a = 100;
//
//void test()
//{
//	printf("test: a=%d\n", a);
//}
//
//int main()  // 全局变量的作用域 - 整个工程
//{
//	test();
//	printf("main: a=%d\n", a);
//
//	return 0;
//}

//int main()  // 局部变量的生命周期 - 进作用域，生命周期开始；出作用域，生命周期结束
//{
//	{
//		int a = 100;
//		printf("%d\n", a);
//	}
//	printf("%d\n", a);  // err
//
//	return 0;
//}

//extern int g_val;  // 声明外部变量
//
//int main()  // 全局变量的生命周期 - 程序的生命周期
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

//int main()  // 字面常量
//{
//	100;
//	3.14;
//	'a';
//
//	return 0;
//}

//int main()  // const修饰的常变量
//{
//	int a = 100;  // 变量
//	a = 200;  // 值能改变
//
//	const int b = 100;  // const修饰的常变量
//	b = 200;  // 值不能改变
//
//	return 0;
//}

//int main()  // const修饰的常变量 - 本质是变量，只是具有了常属性（不能被修改）
//{
//	int arr1[100] = { 0 };  // 定义数组时，[]内必须为常量
//
//	int m = 100;
//	int arr2[m] = { 0 };  // err，m为变量
//
//	const int n = 100;
//	int arr3[n] = { 0 };  // err，n只是具有了常属性，但本质是变量
//
//	return 0;
//}

//#define MAX 100
//
//int main()  // #define定义的标识符常量
//{
//	MAX = 200;  // err，MAX为常量
//
//	return 0;
//}

//#define MAX 100
//
//int main()  // #define定义的标识符常量 - 本质是常量
//{
//	int arr1[100] = { 0 };  // 定义数组时，[]内必须为常量
//
//	int arr2[MAX] = { 0 };  // MAX为常量，可用来定义数组
//
//	return 0;
//}

//enum Gender  // 枚举类型
//{
//	MALE = 3,  // 枚举常量 - 枚举的可能取值
//	FEMALE = 7,
//	SECRET
//};
//
//int main()  // 枚举常量
//{
//	enum Gender s = SECRET;
//
//	printf("%d\n", MALE);  // 3
//	printf("%d\n", FEMALE);  // 7
//	printf("%d\n", SECRET);  // 8
//
//	MALE = 4;  // err，枚举常量的值不能改变
//
//	return 0;
//}

//int main()  // 字符串
//{
//	// char - 字符类型
//	// C语言没有字符串类型 - 通过字符数组来存储字符串
//	// "abcdef" - 字符串字面值
//
//	char ch[] = "abcdef";
//	printf("%s\n", ch);  // %s - 以字符串格式输出
//
//	return 0;
//}

//int main()  // '\0'是字符串的结束标志
//{
//	char ch1[] = "abcdef";
//	printf("%s\n", ch1);
//	printf("%d\n", strlen(ch1));  // strlen - 求字符串长度的函数 - 需包含string.h头文件
//
//	char ch2[] = { 'a','b','c','d','e','f','\0' };
//	printf("%s\n", ch2);
//	printf("%d\n", strlen(ch2));
//
//	char ch3[] = { 'a','b','c','d','e','f' };
//	printf("%s\n", ch3);
//	printf("%d\n", strlen(ch3));
//
//	return 0;
//}

//int main()  // 转义字符
//{
//	printf("abcdn");
//	printf("abcd\n");
//
//	printf("%s\n", "c:\test\test.c");
//	printf("%s\n", "c:\\test\\test.c");
//
//	return 0;
//}

//int main()  // 常见的转义字符
//{
//	// '\?' - 在书写连续多个问号时使用，防止他们被解析成三字母词（古老的概念，已不常见）
//	// ??) --> ]
//	// ??( --> [
//
//	printf("%c\n", '\'');  // '\'' - 用于表示字符常量'
//
//	printf("%s\n", "\"");  // '\"' - 用于表示一个字符串内部的双引号
//
//	printf("%s\n", "c:\\test\\test.c");  // '\\' - 用于表示一个反斜杠，防止它被解释为一个转义序列符
//
//	printf("%c\n", '\065');  // '\ddd' - ddd表示1~3个八进制的数字
//
//	printf("%c\n", '\x51');  // '\xdd' - dd表示2个十六进制数字
//
//	return 0;
//}

//int main()  // 注释
//{
//	// C++注释风格
//	int a = 10;  // 创建整型变量a，并赋值10
//
//	/*
//	  C语言的注释风格
//	*/
//	int b = 20;  /* 创建整型变量b，并赋值20 */
//
//	return 0;
//}

//int main()  // 选择语句
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("是否好好学习（1/0）:>");
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//
//	return 0;
//}

//int main()  // 循环语句
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while (line < 20000)
//	{
//		line++;
//		printf("敲代码：%d\n", line);
//	}
//
//	if (line >= 20000)
//		printf("好offer\n");
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	int sum = 0;
//	sum = x + y;
//	return sum;
//}
//
//int main()  // 函数
//{
//	int num1 = 0;  // 创建所需的变量
//	int num2 = 0;
//	int sum = 0;
//
//	printf("请输入两个整数:>");  // 输入
//	scanf("%d%d", &num1, &num2);
//
//	sum = Add(num1, num2);  // 函数计算
//
//	printf("sum = %d\n", sum);  // 输出
//
//	return 0;
//}

//int main()  // 数组
//{
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//...
//	//int j = 10;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int i = 0;
//	while (i < 10)  // 顺序访问数组元素并打印
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//
//	printf("\n");
//
//	int j = 9;
//	while (j >= 0)  // 逆序访问数组元素并打印
//	{
//		printf("%d ", arr[j]);
//		j--;
//	}
//
//	return 0;
//}

//int main()  // / - 操作数有浮点数时，结果是精确小数；操作数无浮点数时，结果是整除之后的商
//{
//	float a = 5 / 2;
//	float b = 5.0 / 2.0;
//	float c = 5.0 / 2;
//	float d = 5 / 2.0;
//
//	printf("%f\n", a);
//	printf("%f\n", b);
//	printf("%f\n", c);
//	printf("%f\n", d);
//
//	return 0;
//}

//int main()  // % - 操作数必须为整型，结果是整除之后的余数
//{
//	int a = 7 % 2;  // 3...1
//	printf("%d\n", a);
//
//	return 0;
//}

int main()  // << - 二进制位左移
{
	int a = 6;
	// 00000000000000000000000000000110

	int b = a << 1;
	// 00000000000000000000000000001100

	printf("%d\n", a);  // 类似于b=a+1，a的值不变
	printf("%d\n", b);  // 12

	return 0;
}