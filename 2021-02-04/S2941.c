// 크로아티아 알파벳
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    int len,i,count;

    char string[101];

    scanf("%s", string);

    len = strlen(string);

    count = 0;

    for (i = 0; i < len; i++)
    {
        if (string[i] == 'c' && (string[i + 1] == '=' || string[i + 1] == '-'))
            i++;
        else if (string[i] == 'd')
        {
            if (string[i + 1] == '-')
                i++;
            else if (string[i + 1] == 'z' && string[i + 2] == '=')
                i += 2;
        }
        else if ((string[i] == 'l' || string[i] == 'n') && string[i + 1] == 'j')
            i++;
        else if ((string[i] == 's' || string[i] == 'z') && string[i + 1] == '=')
            i++;

        count++;
        printf("%d\n", count);
    }

    printf("%d\n", count);

    return 0;
}