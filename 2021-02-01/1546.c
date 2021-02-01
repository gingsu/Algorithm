// ЦђБе
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int N, high = 0;
    double ave = 0;
    int list[1000];
    
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &list[i]);
        if (high < list[i])
        {
            high = list[i];
        }
    }

    for (int i = 0; i < N; i++)
    {
        ave += ((list[i] / (double)high) * 100);
    }

    printf("%f", (ave / N));

    return 0;
}