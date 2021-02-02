// 단어 공부
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    int top = 0,ar,max = 0;
    char s[1000000];
    char a[26] = { 0, };
    scanf("%s", s);
    _strlwr(s);
    for(int i = 0;s[i]!= '\0';i++)
    {
        a[(s[i] - 97)] += 1;
    }

    for (int j = 0; j < 26; j++)
    {
        if (top < a[j])
        {
            top = a[j];
            ar = j;
        }
    }

    for (int k = 0; k < 26; k++)
    {
        if (top == a[k])
            max += 1;
    }
    if (max == 1)
        printf("%c", ar + 65);
    else
        printf("?");

    return 0;
}