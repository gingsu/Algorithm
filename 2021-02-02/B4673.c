// ¼¿ÇÁ ³Ñ¹ö
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int selfnumber(int n)
{
    int number = n;
    while (n > 0)
    {
        number += n % 10;
        n /= 10;
    }
    return number;
}



int main()
{
    int arr[10001],num;

    for (int i = 1; i < 10001; i++)
    {
        num = selfnumber(i);
        if (num < 10001)
            arr[num] = 1;
    }
    for (int j = 1; j < 10001; j++)
    {
        if (arr[j] != 1)
            printf("%d\n", j);
    }

    return 0;
}