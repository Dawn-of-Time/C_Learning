#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//按位取反测试——对于无符号数
//结论：
//
int main()
{
	printf("以下执行对0取反的操作：\n");

	unsigned int a = 0;//4字节，32位
	unsigned int b = ~a;
	printf("无符号数int：%u\n", b);

	unsigned short c = 0;//2字节，16位
	unsigned short d = ~c;
	printf("无符号数short：%hu\n", d);

	printf("\n以下是参照：\n");

	int e = 0;
	int f = ~e;
	printf("有符号数int：%d\n", f);

	short g = 0;
	short h = ~g;
	printf("有符号数short：%hd\n", h);
}