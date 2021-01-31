// 나머지
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int A,count = 0;
    int nArr[10];

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &A);
        nArr[i] = A % 42;
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
            if (nArr[i] == nArr[j])
                goto EXIT;
        }
        count += 1;
    EXIT:
        continue;
    }
    printf("%d", count);

    return 0;
}


// 간단하고 인상깊은 방법
//#include <stdio.h>
//int main()
//{
//    int cnt = 0, list[10], left[42] = { 0, };
//    for (int i = 0; i < 10; i++)
//    {
//        scanf("%d", &list[i]);
//        left[list[i] % 42]++;
//    }
//    for (int j = 0; j < 42; j++)
//    {
//        if (left[j] != 0) cnt++;
//    }
//    printf("%d", cnt);
//}