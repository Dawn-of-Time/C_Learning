#define _CRT_SECURE_NO_WARNINGS 1
#define Num_of_disks 4
#include <stdio.h>
#include "TOH&CS.h"

int main()
{
	//以下有两种问题亟待解决。
	int ret1 = TOH(Num_of_disks);//TOH-Tower of Hanoi-汉诺塔问题
	printf("TOH--> %d", ret1);
	CS();//CS-Climbing Stairs-青蛙跳台阶问题
	return 0;
}