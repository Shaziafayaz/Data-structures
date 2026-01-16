#include <stdio.h>

int fib(int n);   // function declaration

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Fib of %d is %d", n, fib(n));
    return 0;
}

// function definition (OUTSIDE main)
int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fib(n-1) + fib(n-2);
}
