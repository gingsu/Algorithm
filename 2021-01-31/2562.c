// ÃÖ´ñ°ª
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    int mCount = 0, count = 0;
    int MAX = -1;

    for (int i = 0; i < 9; i++)
    {
        count += 1;
        scanf("%d", &n);
        if (n > MAX)
        {
            MAX = n;
            mCount = count;
        }
    }

    printf("%d\n%d", MAX, mCount);
;
    return 0;
}