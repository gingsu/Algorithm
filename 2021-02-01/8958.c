// OXДыБо
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n, score, count;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char list[80] = { 0, };
        count = 0;
        score = 0;
        scanf("%s", list);
        for (int j = 0; j < sizeof(list); j++)
        {
            if (list[j] == 'O')
            {
                count += 1;
                score += count;
            }
            else if (list[j] == 'X')
            {
                count = 0;
                score += count;
            }
        }
        printf("%d\n", score);
    }
    return 0;
}