#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int r = 0;
    int i = 1;
    for (; i <= 4; i++)
    {
        r += e(i);
    }
    printf("%d\n", r);
    return 0;
}

int e(x)
{
    static int r = 1;
    if (1 == x)
        return 1;
    else
    {
        r = x*e(x-1);
        return r;
    }
}