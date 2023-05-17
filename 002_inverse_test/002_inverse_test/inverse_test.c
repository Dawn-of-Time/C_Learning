#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	printf("以下执行对0取反的操作：\n");

	unsigned int a = 0;//4字节，32位
	unsigned int b = ~a;
	printf("无符号数int：%u\n", b);
	//printf("%d\n", b);	//结果是 -1

	unsigned short c = 0;//2字节，16位
	unsigned short d = ~c;
	printf("无符号数short：%hu\n", d);
	//printf("%hd\n", d);	//结果是 -1

	printf("\n以下是参照：\n");

	int e = 0;
	int f = ~e;
	printf("有符号数int：%d\n", f);	//结果是 有符号数int：-1

	short g = 0;
	short h = ~g;
	printf("有符号数short：%hd\n", h);	//结果是 有符号数short：-1
}