#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	struct Person//�����ṹ��
	{
		//��������
		char name[5];
		int age;
	};

	struct Person p = { "��", 15 };
	struct Person* pp = &p;
	printf("%s\n", pp->name);
	printf("%d\n", pp->age);

	//���Ľṹ���еı���
	strcpy(p.name, "��");//Ӧ��strcpy()�������滻�ַ���
	p.age = 20;
	printf("%s\n", pp->name);
	printf("%d\n", pp->age);

	return 0;
}