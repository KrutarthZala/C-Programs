#include <stdio.h>

int main()
{
    int num,i;

    printf("Enter number : ");
    scanf("%d",&num);

    for ( i = 2; i*i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("Number is not prime.\n");
            return 0;
        }  
    }
    
    printf("The number is prime.\n");

    return 0; 
}