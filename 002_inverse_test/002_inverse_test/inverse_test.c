#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	printf("����ִ�ж�0ȡ���Ĳ�����\n");

	unsigned int a = 0;//4�ֽڣ�32λ
	unsigned int b = ~a;
	printf("�޷�����int��%u\n", b);
	//printf("%d\n", b);	//����� -1

	unsigned short c = 0;//2�ֽڣ�16λ
	unsigned short d = ~c;
	printf("�޷�����short��%hu\n", d);
	//printf("%hd\n", d);	//����� -1

	printf("\n�����ǲ��գ�\n");

	int e = 0;
	int f = ~e;
	printf("�з�����int��%d\n", f);	//����� �з�����int��-1

	short g = 0;
	short h = ~g;
	printf("�з�����short��%hd\n", h);	//����� �з�����short��-1
}