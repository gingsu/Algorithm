// 손익분기점
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int A, B, C, i;

    scanf("%d %d %d", &A, &B, &C);

    if (B >= C)
        i = -1;
    else
        i = A / (C - B) + 1;

    printf("%d\n", i);

    return 0;
}

