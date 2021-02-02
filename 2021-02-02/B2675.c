// 문자열 반복
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        char s[21];
        int r;
        scanf("%d %s", &r, s);
        for (int j = 0; s[j]!= NULL; j++)
        {
            for (int k = 0; k < r; k++)
                printf("%c", s[j]);
        }
        printf("\n");
    }

    return 0;
}