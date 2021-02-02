// 숫자의 합
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    int num= 0;
    scanf("%d", &n);

    char numlist[100] = { 0, };

    scanf("%s", numlist);

    for (int i = 0; i < n; i++)
    {
        num += (numlist[i]-48);
    }
    
    printf("%d\n", num);


    return 0;
}