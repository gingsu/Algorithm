// 단어의 개수
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    int count;
    char string[1000000] = { 0, };
    char* ptr;

    scanf("%[^\n]s", string);

    ptr = strtok(string, " ");

    count = 0;

    while (ptr != NULL)
    {
        ptr = strtok(NULL, " ");
        count++;
    }

    printf("%d", count);

    return 0;
}