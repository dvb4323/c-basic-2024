#include <stdio.h>

int fibo(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int n;
    printf("Nhap so so hang cua day Fibonnaci:\n");
    scanf("%d", &n);
    printf("Day Fibonnaci voi %d so hang la:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", fibo(i));
    }
    return 0;
}