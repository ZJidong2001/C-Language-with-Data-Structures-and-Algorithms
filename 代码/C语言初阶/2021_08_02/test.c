#include <stdio.h>

//int main()  // 指针+-整数、指针的关系运算
//{
//	int values[5];
//	int* vp;
//
//	for (vp = &values[0]; vp < &values[5];)
//	{
//		*vp++ = 0;  // ++优先级比*高，但是是后置++，先使用后++
//		//*vp = 0;
//		//vp++;
//	}
//
//	// 允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较
//	for (vp = &values[5]; vp > &values[0];)
//	{
//		printf("%d ", *--vp);
//	}
//
//	// 不允许指向数组元素的指针与指向第一个元素之前的那个内存位置的指针进行比较
//	for (vp = &values[4]; vp >= &values[0]; vp--)  // 避免这种写法
//	{
//		printf("%d ", *vp);
//	}
//
//	return 0;
//}

//int main()  // 指针-指针
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	char ch[5] = { 0 };
//
//	printf("%d\n", &arr[9] - &ch[0]);  // err - 指针-指针的前提是两个指针指向同一块区域
//
//	printf("%d\n", &arr[9] - &arr[0]);  // 指针-指针得到的数字的绝对值是指针和指针之间元素的个数
//	printf("%d\n", &arr[0] - &arr[9]);
//
//	return 0;
//}

//int my_strlen(char* s)
//{
//	char* begin = s;
//	char* end = s;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - begin;
//}
//
//int main()  // 求字符串长度
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

//int main()  // 指针和数组
//{
//	int arr[10];
//
//	// 一般情况下，数组名表示的是数组首元素的地址
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//
//	// 但是有2个例外：
//
//	// 1. sizeof(数组名) - 数组名表示整个数组，计算的是整个数组在内存中所占的空间
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//
//	// 2. &数组名 - 数组名表示整个数组，拿到的是整个数组的地址
//	printf("%p\n", arr);  // 数组名是首元素的地址
//	printf("%p\n", arr + 1);
//
//	printf("%p\n", &arr[0]);  // 数组第一个元素的地址
//	printf("%p\n", &arr[0] + 1);
//
//	printf("%p\n", &arr);  // 取出整个数组的地址
//	printf("%p\n", &arr + 1);
//
//	return 0;
//}

//int main()  // 二级指针
//{
//	int a = 10;
//
//	int* p = &a;  // 一级指针（*表示是指针变量，int表示指向的对象是int类型）
//
//	int** pp = &p;  // 二级指针（*表示是指针变量，int*表示指向的对象是int*类型）
//
//	**pp = 20;
//
//	printf("%d\n", a);
//
//	int*** ppp = &pp;  // 三级指针（*表示是指针变量，int**表示指向的对象是int**类型）
//
//	return 0;
//}

//int main()  // 指针数组
//{
//	int arr[10];  // 整型数组 - 存放整型的数组
//	char ch[5];  // 字符数组 - 存放字符的数组
//
//	// 指针数组 - 存放指针的数组
//	int* parr[5];  // 整型指针的数组
//	char* pch[6];  // 字符指针的数组
//
//	return 0;
//}

//int main()  // 指针数组的应用
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int* parr[10];
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		parr[i] = &arr[i];
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(parr[i]));
//	}
//
//	return 0;
//}

//struct Book  // 结构体类型的声明
//{
//	char name[20];
//	char author[15];
//	float price;
//}b1, b2;  // 全局变量，等价于struct Book b1; struct Book b2;
//
//struct Point
//{
//	int x;
//	int y;
//}p1, p2;  // 全局变量，等价于struct Point p1; struct Point p2;
//
//typedef struct Stu  // 类型重定义
//{
//	char name[20];
//	int age;
//	char id[20];
//}Stu;
//
//int main()  // 结构体变量的定义和初始化
//{
//	struct Book b;  // 局部变量
//
//	struct Point p = { 10,20 };  // 局部变量
//
//	struct Stu s1 = { "张三",20,"2020010506" };
//	Stu s2 = { "李四",21,"2021020512" };
//
//	return 0;
//}

//int main()  // 可以在main函数里面声明结构体类型，该用法少见
//{
//	struct Car
//	{
//		char brand[20];
//		char model[15];
//		char year[15];
//	}c;
//
//	return 0;
//}

//struct Parents
//{
//	char father[20];
//	char mother[20];
//};
//
//struct Person  // 成员变量为结构体的结构体类型的声明
//{
//	struct Parents parents;
//	char name[20];
//	int age;
//};
//
//int main()  // 成员变量为结构体的结构体变量的定义和初始化
//{
//	struct Person p = { {"张三","李四"},"张五",30 };
//
//	return 0;
//}

//struct Parents
//{
//	char father[20];
//	char mother[20];
//};
//
//struct Person
//{
//	struct Parents parents;
//	char name[20];
//	int age;
//};
//
//int main()  // 结构体成员的访问
//{
//	struct Person p = { {"张三","李四"},"张五",30 };
//	printf("%s %s %s %d\n", p.parents.father, p.parents.mother, p.name, p.age);
//
//	struct Person* pp = &p;
//	printf("%s %s %s %d\n", pp->parents.father, pp->parents.mother, pp->name, p.age);
//
//	return 0;
//}

struct Stu
{
	char name[20];
	int age;
	char id[20];
};

void print1(struct Stu s)
{
	printf("%s %d %s\n", s.name, s.age, s.id);
}

void print2(struct Stu* ps)
{
	printf("%s %d %s\n", ps->name, ps->age, ps->id);
}

int main()  // 结构体传参
{
	struct Stu s = { "张三",18,"2020010506" };

	print1(s);
	print2(&s);

	return 0;
}