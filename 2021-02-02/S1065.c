// ÇÑ¼ö
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int han(int n)
{
    int h, t, o, check = 0;
    if (n < 100)
    {
        printf("%d\n", n);
    }
    else
    {
        for(int i = 100;i<n+1;i++)
        {
            h = i / 100;
            t = (i % 100) / 10;
            o = (i % 10);
            if ((h - t) == (t - o))
                check += 1;
        }
        printf("%d\n", check + 99);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    
    han(n);

    return 0;
}