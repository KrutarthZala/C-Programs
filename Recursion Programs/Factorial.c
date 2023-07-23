#include <stdio.h>

int fact(int);

void main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    int factorial = fact(num);

    printf("Factorial : %d", factorial);
}

int fact(int n)
{
    if(n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return (n * fact(n - 1));
    }
}