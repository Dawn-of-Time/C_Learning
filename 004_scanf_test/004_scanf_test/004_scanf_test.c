#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// ���Կո����Ϊ�ָ�����a b c d�󣬻������0 0 0 0 0��
// ���Կո����Ϊ�ָ�����1 2 3 4�󣬻������1 2 3 4 4��
// ���Կո�Ϊ�ָ�����1 2 ^Z 3 4֮�󣬻������1 2 0 0 2��ʵ����������^Z������ʲô��û�����壩��
// ���Ի���Ϊ�ָ�����1 2 ^Z ^Z֮�󣬻������1 2 0 0 2��
// ���Ի���Ϊ�ָ�����^Z ^Z ^Zʱ�����0 0 0 0 -1��
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
//	int num = scanf("%d%*d%d", &a, &b); //����1 2 3
//	printf("%d %d %d", a, b, num); // �õ�1 3 2
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%3d%4d", &a, &b); //����123456789
//	printf("%d %d", a, b); //�õ�123 4567
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);     //��ʽ1
//	//scanf("%d %d", &a, &b);  //��ʽ2
//	//scanf("%d\n%d", &a, &b); //��ʽ3
//	//scanf("%d\t%d", &a, &b); //��ʽ4
//	printf("%d %d", a, b);	   //����4����ʽ�Ľ��һ��
//	return 0;
//}

//int main()
//{
//	char a = 0;
//	char b = 0;
//	char c = 0;
//	scanf("%c%c%c", &a, &b, &c);//����m (Space) n
//	printf("%c %c %c", a, b, c);//�õ�m (Space) n����aΪ�ַ�m��bΪ�ո��ַ���cΪ�ַ�n
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%dxy%d", &a, &b);//����-���1:123 456�����2��123xy456
//	printf("%d %d", a, b);//�õ�-���1��123 0�����2��123 456
//	return 0;
//}

int main()
{
	char a = 0;
	char b = 0;
	int i = 0;
	//while (i < 2)
	//{
	//	scanf("%c", &a);//i=0������a��i=1�����޷����룩
	//	printf("%c", a);//i=0���õ�a��i=1���õ�(Newline)
	//	i++;
	//}
	while (i < 2)
	{
		scanf("%c", &a);//i=0������a��i=1��b
		while (b = getchar() != '\n');//���Գ�ȥ���з�
		printf("%c\n", a);//i=0���õ�a��i=1���õ�b
		i++;
	}
}