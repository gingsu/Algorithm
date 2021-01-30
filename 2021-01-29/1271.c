#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char a[6];
    int b = 0;
    scanf("%s", a);
    b = strtol(a, NULL, 16);
    printf("%d", b);
    return;
}