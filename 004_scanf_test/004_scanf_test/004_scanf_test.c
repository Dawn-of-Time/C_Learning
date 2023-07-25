#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// 当以空格或换行为分隔输入a b c d后，换行输出0 0 0 0 0；
// 当以空格或换行为分隔输入1 2 3 4后，换行输出1 2 3 4 4；
// 当以空格为分隔输入1 2 ^Z 3 4之后，换行输出1 2 0 0 2（实际上无论在^Z后输入什么都没有意义）；
// 当以换行为分隔输入1 2 ^Z ^Z之后，换行输出1 2 0 0 2；
// 当以换行为分隔输入^Z ^Z ^Z时，输出0 0 0 0 -1；
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int num = scanf("%d%d%d%d", &a, &b, &c, &d);
//	printf("%d %d %d %d %d", a, b, c, d, num);
//	return 0;
//}

//int main()
//{
//	char ch = 0;
//	int a = 0;
//	scanf("%c", &ch);
//	scanf("%d", &a);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int num = scanf("%d%*d%d", &a, &b); //输入1 2 3
//	printf("%d %d %d", a, b, num); // 得到1 3 2
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%3d%4d", &a, &b); //输入123456789
//	printf("%d %d", a, b); //得到123 4567
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);     //形式1
//	//scanf("%d %d", &a, &b);  //形式2
//	//scanf("%d\n%d", &a, &b); //形式3
//	//scanf("%d\t%d", &a, &b); //形式4
//	printf("%d %d", a, b);	   //以上4种形式的结果一致
//	return 0;
//}

//int main()
//{
//	char a = 0;
//	char b = 0;
//	char c = 0;
//	scanf("%c%c%c", &a, &b, &c);//输入m (Space) n
//	printf("%c %c %c", a, b, c);//得到m (Space) n，即a为字符m，b为空格字符，c为字符n
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%dxy%d", &a, &b);//输入-情况1:123 456；情况2：123xy456
//	printf("%d %d", a, b);//得到-情况1：123 0；情况2：123 456
//	return 0;
//}

int main()
{
	char a = 0;
	char b = 0;
	int i = 0;
	//while (i < 2)
	//{
	//	scanf("%c", &a);//i=0：输入a；i=1：（无法输入）
	//	printf("%c", a);//i=0：得到a；i=1：得到(Newline)
	//	i++;
	//}
	while (i < 2)
	{
		scanf("%c", &a);//i=0：输入a；i=1：b
		while (b = getchar() != '\n');//用以除去换行符
		printf("%c\n", a);//i=0：得到a；i=1：得到b
		i++;
	}
}