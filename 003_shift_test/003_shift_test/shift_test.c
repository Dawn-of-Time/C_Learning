#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	short a = 4, b = 4, c = 4, d = 4;
	a <<= 1;
	b >>= 1;
	c <<= 2;
	d >>= 2;
	printf("%hd %hd %hd %hd\n", a,b,c,d);	//½á¹ûÊÇ 8 2 16 1
	return 0;
}