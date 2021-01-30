// X보다 작은 수
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n ,x,y=0;
    scanf("%d %d", &n,&x);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &y);
        if (x > y)
            printf("%d\n", y);
    }

    return 0;
}