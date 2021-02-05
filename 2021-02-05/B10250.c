// ACM хёез
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int t,h, w, n,i,j,k,count;

    scanf("%d", &t);


    for(i=0;i<t;i++)
    {
        count = 0;
        scanf("%d %d %d", &h, &w, &n);
        for(j = 1;j<=w;j++)
        {
            for (k = 1; k <= h; k++)
            {
                count++;
                if (count == n)
                    break;
            }
            if (count == n)
                break;
        }
        printf("%d%02d\n", k, j);
    }

    return 0;
}