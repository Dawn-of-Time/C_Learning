#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//��λȡ�����ԡ��������޷�����
//���ۣ�
//���Ҫ���ʮ���ơ��з���������������Ϊint����ʽ������%d��
//���Ҫ���ʮ���ơ��з���������������Ϊshort����ʽ������%hd��
//���Ҫ���ʮ���ơ��޷���������������Ϊint����ʽ������%u��
//���Ҫ���ʮ���ơ��޷���������������Ϊshort����ʽ������%hu��

//���Դ������£�
int main()
{
	printf("����ִ�ж�0ȡ���Ĳ�����\n");

	unsigned int a = 0;//4�ֽڣ�32λ
	unsigned int b = ~a;
	printf("�޷�����int��%u\n", b);

	unsigned short c = 0;//2�ֽڣ�16λ
	unsigned short d = ~c;
	printf("�޷�����short��%hu\n", d);

	printf("\n�����ǲ��գ�\n");

	int e = 0;
	int f = ~e;
	printf("�з�����int��%d\n", f);

	short g = 0;
	short h = ~g;
	printf("�з�����short��%hd\n", h);
}