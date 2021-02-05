// 그룹 단어 체커
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,j,k,count;

    char str[101];

    scanf("%d", &n);

    count = 0;

    for (i = 0; i < n; i++)
    {
        scanf("%s",str);
        for (j = 0; j < strlen(str); j++)
        {
            for (k = j + 2; k < strlen(str); k++) 
            {
                if (str[j] == str[j + 1]) continue;
                else if (str[j] == str[k])
                {
                    count--;
                    goto EXIT;
                }
            }
        }
        EXIT:
        count++;
    }

    printf("%d\n", count);

    return 0;
}