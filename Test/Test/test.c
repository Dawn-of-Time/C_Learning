#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int main()
{
    int a = 0;
    int* p = &a;
    printf("%p\n", p);
    printf("%p\n", p+1);
    printf("%p\n", p+2);
}
