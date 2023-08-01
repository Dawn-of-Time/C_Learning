#define _CRT_SECURE_NO_WARNINGS 1
//汉诺塔问题概述：
//BASE-在一块铜板装置上，有三根杆(编号A、B、C)，在A杆自下而上、由大到小按顺序放置若干个金盘。
//GOAL-把A杆上的金盘全部移到C杆上，并仍保持原有顺序叠好。
//RULE-每次只能移动一个盘子，并且在移动过程中三根杆上都始终保持大盘在下，小盘在上，操作过程中盘子可以置于A、B、C任一杆上。
int TOH(int n)
{
	//问题分解：将最底盘之上的n-1个盘子移动至中间杆上，然后将最底盘移动至目标杆上，直至起始杆没有盘子。
	//定义返回结果为操作次数。
	static int ret = 0;
	//1.递归限制条件：
	if (n == 0)
		return 0;
	//2.递归部分：
	else
		//2.1.将A杆（或B杆）最底盘之上的n-1个盘子移动至B杆（或A杆）上。
		ret += TOH(n - 1);
	//2.2.将最底盘移动至C杆上。
		ret += 1;
	return ret;
}