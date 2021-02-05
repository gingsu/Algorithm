// 달팽이는 올라가고 싶다
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a, b, v,day,m;
    scanf("%d %d %d", &a, &b, &v);

    m = v - a;

    if (v == a)
        day = 1;
    else if (m % (a - b) != 0)
        day = m / (a - b) + 2;
    else
        day = m / (a - b) + 1;

    printf("%d\n", day);

    return 0;
}