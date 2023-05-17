#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	char arr1[] = 'abc';
	char arr2[] = { 'a', 'b', 'c' };
	char arr3[] = { 'a', 'b', 'c', '\0' };
	printf("%s\n", arr1); //结果是abc
	printf("%s\n", arr2); //结果是一串乱码
	printf("%s\n", arr3); //结果是abc
	return 0;
}

//#include <stdio.h>
//#define N 5
//int main()
//{
//	//const int n = 5;
//	//char arr1[n] = {0}; //报错
//	char arr2[N] = { 0 }; //正确
//	char arr3[5] = { 0 };
//	return 0;
//}
