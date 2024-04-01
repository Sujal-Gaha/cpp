#include <stdio.h>

int main()
{
    int n, i;
    int fibo(int k);
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Fibonacci numbers upto %dth term: \n", n);
    for (i = 1; i <= n; i++)
    {
        printf("%d\t", fibo(i));
    }
}

int fibo(int k)
{
    if (k == 1 || k == 2)
    {
        return 1;
    }
    else
    {
        return fibo(k - 1) + fibo(k - 2);
    }
}