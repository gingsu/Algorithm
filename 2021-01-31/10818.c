// 최소, 최대
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d", &n);
    int MIN = 1000000, MAX = -1000000;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m);
        if (MIN > m)
        {
            MIN = m;
        }
        if (MAX < m)
        {
            MAX = m;
        }
    }
    printf("%d %d", MIN, MAX);

    return 0;
}