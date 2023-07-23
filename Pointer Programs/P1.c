#include <stdio.h>

void main()
{
    int a = 10,b = 20, *p1 = &a, *p2 = &b;
    p1 = p2;

    printf("p1 = %d",*p1); 
    printf("p2 = %d",*p2); 
}