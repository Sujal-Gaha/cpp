#include <stdio.h>

int main()
{
    int n;
    int sumOfNaturalNumbers(int n);
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Sum of first %d natural numbers = %d", n, sumOfNaturalNumbers(n));
}

int sumOfNaturalNumbers(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + sumOfNaturalNumbers(n - 1);
    }
}