// 정수 N개의 합

long long sum(int* a, int n)
{
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}