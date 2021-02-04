// »ó¼ö
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int i;
    char A[4];
    char B[4];

    scanf("%s %s", &A, &B);
    
    for (i = 2; i >= 0; i--)
    {
        if (A[i] > B[i])
        {
            printf("%c%c%c\n", A[2], A[1], A[0]);
            break;
        }
        else if(B[i] > A[i])
        {
            printf("%c%c%c\n", B[2], B[1], B[0]);
            break;
        }
    }

    return 0;
}