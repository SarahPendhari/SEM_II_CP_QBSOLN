#include <stdio.h>
#include <conio.h>
void main()
{
    int n,sum;
    n=5,sum=0;

    while(n*(n+1)<400)
    {
        sum = sum +n;
        n = n+1;
    }
    printf("Sum: %d",sum);
}
