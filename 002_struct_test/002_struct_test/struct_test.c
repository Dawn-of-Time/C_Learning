#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	struct Person//创建结构体
	{
		//声明变量
		char name[5];
		int age;
	};

	struct Person p = { "我", 15 };
	struct Person* pp = &p;
	printf("%s\n", pp->name);
	printf("%d\n", pp->age);

	//更改结构体中的变量
	strcpy(p.name, "他");//应用strcpy()函数来替换字符串
	p.age = 20;
	printf("%s\n", pp->name);
	printf("%d\n", pp->age);

	return 0;
}