// ´ÙÀÌ¾ó
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int dial[] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
    char string[16];
    int i,sec;

    sec = 0;

    scanf("%s", string);

    for (i = 0; string[i] != NULL; i++)
    {
        sec += dial[string[i] - 65];
    }

    printf("%d\n", sec);

    return 0;
}