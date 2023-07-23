#include <stdio.h>

void main()
{
    int n, f = 0, s = 1, sum;
    printf("Enter the number : ");
    scanf("%d",&n);

    printf("Fibonacci series upto %d is ",n);

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("0 ");
        }
        else if (i == 1)
        {
            printf("1 ");
        }
        else
        {
            sum = f + s;
            f = s;
            s = sum;
            printf("%d ",sum);
        }
        
    }
    
}