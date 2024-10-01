#include <stdio.h>

//int main()  // 地址
//{
//	int num = 10;  // 向内存申请4Byte空间，存储整型值10
//
//	&num;  // 取出num的地址，&--取地址操作符
//
//	printf("%p\n", &num);  // %p - 以16进制地址格式输出
//	// 当变量大小超过1Byte时，取地址拿到的是第一个byte的地址（较小的地址），后面的根据创建变量类型顺藤摸瓜
//
//	return 0;
//}

//int main()  // 指针
//{
//	int num = 10;
//	int* p = &num;
//	// p是一个存放地址的变量，这样的变量就称为指针变量
//	// 如何去定义一个p变量呢？用int*
//	// *说明创建的变量是指针变量，int说明指针指向的对象是int类型
//	// 通过p可以找到num，所以可以认为p指向了num
//
//	return 0;
//}

//int main()  // 指针的使用实例
//{
//	int num = 10;
//	int* p = &num;
//
//	printf("%d\n", num);
//	*p = 20;  // *解引用操作符，通过*可以找到指针所指向的内存空间
//	printf("%d\n", num);
//
//	return 0;
//}

//int main()  // 指针的使用实例
//{
//	char ch = 'w';
//	char* pc = &ch;
//
//	printf("%c\n", ch);
//	*pc = 'q';  // *解引用操作符，通过*可以找到指针所指向的内存空间
//	printf("%c\n", ch);
//
//	return 0;
//}

//int main()  // 指针类型的大小
//{
//	printf("%zu\n", sizeof(char*));
//	printf("%zu\n", sizeof(short*));
//	printf("%zu\n", sizeof(int*));
//	printf("%zu\n", sizeof(double*));
//
//	return 0;
//}

struct Book  // 创建书的结构体类型
{
	char name[20];
	int price;
	char author[20];
};

int main()  // 结构体
{
	struct Book b = { "C语言程序设计",55,"谭浩强" };  // 定义书的结构体变量
	struct Book* pb = &b;  // 结构体变量的地址需要用结构体指针存储

	printf("%s %d %s\n", b.name, b.price, b.author);  // . - （通过结构体变量）访问结构体变量里的成员 - 结构体变量.成员名
	printf("%s %d %s\n", (*pb).name, (*pb).price, (*pb).author);  // 和下面代码含义一样，但是因为pb是指针，->表示的是指针指向对象的结构体成员，更加直观方便
	printf("%s %d %s\n", pb->name, pb->price, pb->author);  // -> - （通过结构体指针）访问结构体变量里的成员 - 结构体指针->成员名

	return 0;
}