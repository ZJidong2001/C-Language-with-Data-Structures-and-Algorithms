#include <stdio.h>

//int main()  // 语句
//{
//	1 + 2;  // 由一个分号;隔开的就是一条语句
//	;  // 空语句
//
//	return 0;
//}

//int main()  // 单分支
//{
//	int age = 20;
//	if (age >= 18)
//		printf("成年\n");
//
//	return 0;
//}

//int main()  // 双分支
//{
//	int age = 10;
//	if (age >= 18)
//		printf("成年\n");
//	else
//		printf("未成年\n");
//
//	return 0;
//}

//int main()  // 多分支
//{
//	int age = 25;
//	if (age < 18)
//		printf("少年\n");
//	else if (age >= 18 && age < 30)
//		printf("青年\n");
//	else if (age >= 30 && age < 50)
//		printf("中年\n");
//	else if (age >= 50 && age < 80)
//		printf("老年\n");
//	else
//		printf("老寿星\n");
//
//	return 0;
//}

//int main()  // 判断多个条件，使用逻辑运算符
//{
//	int age = 10;
//	if (18 <= age < 30)  // err
//		printf("青年\n");
//
//	return 0;
//}

//int main()  // 控制多条语句，使用代码块{}
//{
//	int age = 20;
//	if (age >= 18)
//	{
//		printf("成年\n");
//		printf("可以谈恋爱\n");
//	}
//
//	return 0;
//}

//int main()  // 悬空else — 就近原则
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//        if (b == 2)
//            printf("hehe\n");
//    else
//        printf("haha\n");
//
//    return 0;
//}

//int main()  // 改正悬空else
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//    {
//        if (b == 2)
//        {
//            printf("hehe\n");
//        }
//    }
//    else
//    {
//        printf("haha\n");
//    }
//
//    return 0;
//}

//int main()  // 代码风格非常重要，要养成良好的编码风格
//{
//	int a=10;  // 不推荐
//	int a = 10;
//
//	int i = 0;
//	for (i=0;i<10;i++)  // 不推荐
//	{
//
//	}
//	for (i = 0; i < 10; i++)
//	{
//
//	}
//
//	a(10, 20);  // 不推荐
//	Add(10, 20);
//
//	char firstname[20];  // 不推荐
//	char first_name[20];
//	char FirstName[20];
//	char First_Name[20];  // 不推荐
//
//	return 0;
//}

//int test1()  // 条件成立返回x，不成立返回y
//{
//	if (0)
//	{
//		return 3;  // 遇到return，函数运行结束
//	}
//	return -3;
//}
//
//int test2()  // 推荐
//{
//	if (0)
//	{
//		return 3;
//	}
//	else
//	{
//		return -3;
//	}
//}
//
//int main()
//{
//	int ret1 = test1();
//	int ret2 = test2();
//	printf("%d\n", ret1);
//	printf("%d\n", ret2);
//
//	return 0;
//}

//int main()  // 常量和变量比较是否相等时，推荐常量写在左边，避免==写成=的bug
//{
//	int num = 3;
//
//	if (num == 5)
//	{
//		printf("hehe\n");
//	}
//	if (5 == num)  // 推荐
//	{
//		printf("hehe\n");
//	}
//
//	if (num = 5)
//	{
//		printf("hehe\n");
//	}
//	if (5 = num)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//int main()  // 判断一个数是否为奇数
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	if (num % 2 == 1)
//	{
//		printf("%d是奇数\n", num);
//	}
//	else
//	{
//		printf("%d不是奇数\n", num);
//	}
//
//	return 0;
//}

//int main()  // 输出1-100之间的奇数
//{
//	int i = 1;  // 法一
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//		i++;
//	}
//
//	printf("\n");
//
//	int j = 1;  // 法二
//	while (j <= 100)
//	{
//		printf("%d ", j);
//		j += 2;
//	}
//
//	return 0;
//}

//int main()  // if-else与switch-case形式对比 
//{
//	int day = 0;
//	scanf("%d", &day);
//
//	if (1 == day)
//		printf("星期一\n");
//	else if (2 == day)
//		printf("星期二\n");
//	else if (3 == day)
//		printf("星期三\n");
//	else if (4 == day)
//		printf("星期四\n");
//	else if (5 == day)
//		printf("星期五\n");
//	else if (6 == day)
//		printf("星期六\n");
//	else
//		printf("星期天\n");
//
//	switch (day)  // 整型表达式
//	{
//	case 1:  // 整型常量表达式
//		printf("星期一\n");
//		break;  // 在switch语句中，我们没法直接实现分支，搭配break使用才能实现真正的分支
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//
//	return 0;
//}

//int main()  // default子句
//{
//	int day = 0;
//	scanf("%d", &day);
//
//	switch (day)
//	{
//	default:  // 条件全不满足，执行default语句，语句流会像贯穿一个case标签一样贯穿default子句
//		printf("输入数据有误，请输入1-7的数字\n");
//		break;
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	}
//
//	return 0;
//}

//int main()  // 屏幕输出结果？
//{
//    int n = 1;
//    int m = 2;
//    switch (n)
//    {
//    case 1:
//        m++;
//    case 2:
//        n++;
//    case 3:
//        switch (n)  // switch允许嵌套使用
//        {
//        case 1:
//            n++;
//        case 2:
//            m++;
//            n++;
//            break;
//        }
//    case 4:
//        m++;
//        break;
//    default:
//        break;
//    }
//    printf("m = %d, n = %d\n", m, n);
//
//    return 0;
//}

//int main()  // while语句
//{
//	while (1)
//		printf("hehe\n");
//
//	return 0;
//}

//int main()  // continue：跳过本次循环continue后边的代码，直接到while循环的判断部分
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}

//int main()  // break：永久终止循环
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			break;
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}

//int main()  // getchar与putchar
//{
//	int ch = 0;
//	ch = getchar();  // 从标准输入读取一个字符
//	putchar(ch);  // 将一个字符输出到标准输出
//	//scanf("%c", &ch);
//	//printf("%c", ch);
//
//	return 0;
//}

//int main()  // EOF - End Of File - 文件结束标志
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)  // getchar - 读取成功时，返回读取的字符（ASCII码值）；读取失败时，返回EOF（ASCII码值为-1）
//		putchar(ch);
//
//	return 0;
//}

//int main()  // 输入缓冲区残留
//{
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码>:");
//	scanf("%s", password);
//
//	printf("请确认密码(Y/N)>:");
//	ch = getchar();  // 输入缓冲区有'\n'，读取字符为'\n'
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//
//	return 0;
//}

//int main()  // 清空输入缓冲区
//{
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码>:");
//	scanf("%s", password);
//
//	getchar();  // 如果密码包含空格时，并未彻底清空输入缓冲区
//
//	printf("请确认密码(Y/N)>:");
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//
//	return 0;
//}

//int main()  // 清空输入缓冲区
//{
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码>:");
//	scanf("%s", password);
//
//	while ((ch = getchar()) != '\n')  // 彻底清空输入缓冲区
//	{
//		;
//	}
//
//	printf("请确认密码(Y/N)>:");
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//
//	return 0;
//}

int main()  // 仅输出'0'-'9'
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9')
		{
			continue;
		}
		putchar(ch);
	}

	return 0;
}