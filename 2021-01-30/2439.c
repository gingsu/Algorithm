// º° Âï±â - 2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > 0; j--)
        {
            if (j <= i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}