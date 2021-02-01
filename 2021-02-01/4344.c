// 평균은 넘겠지

//사람수와 점수를 한줄에 입력받는 코드
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int c,sum=0,person,high;
    int ave = 0;
    int line[3004] ;
    int arr[1001] = { 0, };

    scanf("%d", &c);

    for (int i = 0; i < c; i++)
    {
        high = 0;
        sum = 0;
        while (getchar() != '\n');
        scanf("%[^\n]s", line);

        person = atoi(strtok(line, " "));
        int j = 0;
        while (j != person)
        {
            arr[j] = atoi(strtok(NULL, " "));
            j++;
        }

        for (int k = 0; k < person; k++)
        {
            sum += arr[k];
        }

        ave = sum / person;

        for (int l = 0; l < person; l++)
        {
            if (arr[l] > ave)
            {
                high += 1;
            }
        }
        printf("%0.3f%%\n", ((double)high / person) * 100);

    }
    return 0;
}
