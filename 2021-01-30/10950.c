// A+B - 3
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a, b;

    for (int i = 0; i < n * 2; i += 2)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
    return 0;
}

//입력을 전부 받고 난 후에 출력을 한꺼번에
//해줘야 하는 문제인줄 알고 푼 처음 코드..
//int main()
//{
//    int n;
//    scanf("%d", &n);
//
//    int m[100] = {0, };
//
//    for (int i = 0; i < n*2; i+=2)
//    {
//        fflush(stdin);
//        scanf("%d %d", &m[i], &m[i + 1]);
//    }
//    for (int i = 0; i < n*2; i+=2)
//    {
//        printf("%d\n", m[i]+ m[i + 1]);
//    }
//
//    return 0;
//}

