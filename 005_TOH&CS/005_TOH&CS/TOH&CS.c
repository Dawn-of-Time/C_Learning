#define _CRT_SECURE_NO_WARNINGS 1
#define Num_of_disks 4
#include <stdio.h>
#include "TOH&CS.h"

int main()
{
	//��������������ؽ�������
	int ret1 = TOH(Num_of_disks);//TOH-Tower of Hanoi-��ŵ������
	printf("TOH--> %d", ret1);
	CS();//CS-Climbing Stairs-������̨������
	return 0;
}