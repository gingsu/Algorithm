// ¹úÁý
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n,room,i;

    scanf("%d", &n);

    room = 1;
    i = 0;
    while (1)
    {
        room += 6 * i;
        i++;
        if (room >= n)
            break;
    }
    printf("%d\n", i);

    return 0;
}