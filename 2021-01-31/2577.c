// 숫자의 개수
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int f, s, t, mul;
    int arr[10] = { 0, };
    char ptr[20];

    scanf("%d\n%d\n%d", &f, &s, &t);

    mul = (f * s * t);
    sprintf(ptr, "%d", mul);
    for (int i = 0; i < 10; i++) 
    {
        switch(ptr[i])
        {
            case '1':
                arr[1] += 1;
                break;
            case '2':
                arr[2] += 1;
                break;
            case '3':
                arr[3] += 1;
                break;
            case '4':
                arr[4] += 1;
                break;
            case '5':
                arr[5] += 1;
                break;
            case '6':
                arr[6] += 1;
                break;
            case '7':
                arr[7] += 1;
                break;
            case '8':
                arr[8] += 1;
                break;
            case '9':
                arr[9] += 1;
                break;
            case '0':
                arr[0] += 1;
                break;
            default:
                break;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}