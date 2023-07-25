#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	short a = 4;
	a <<= 2;
	
	short b = 5;
	b >>= 1;
	short c = -4;
	c >>= 2;
	printf("%hd\n%hd\n", b, c);
	return 0;
}