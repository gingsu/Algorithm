// ¾ËÆÄºª Ã£±â
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char s[100] = { 0, };
    int count = 0;
    scanf("%s", s);

    for (char j = 97; j < 123; j++)
    {
        count = 0;
        for (int i = 0; i < sizeof(s); i++)
        {
            if (s[i] == j)
            {
                count += 1;
                printf("%d ", i);
                break;
            }
            
                
        }
        if(count != 1)
            printf("%d ", -1);
    }

    return 0;
}