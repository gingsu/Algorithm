// 더하기 사이클
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a,b,count =0;
    scanf("%d", &a);
    b = a;
    do {
        a = ((a % 10) * 10) + (((a / 10) + (a % 10))%10);
        count += 1;
    } while (a != b);

    printf("%d", count);
    return 0;
}