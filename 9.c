#include <stdio.h>
#include <conio.h>

void main()
{
    int n,i,sum=0,r;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
        r = n%10;
        n = n/10;
        sum = sum + r;
    }
    printf("Sum of the digits: %d",sum);
}
