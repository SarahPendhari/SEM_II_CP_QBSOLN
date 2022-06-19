#include <stdio.h>
#include <conio.h>

void main()
{
    int n,d,r;
    printf("Enter number that has to be reversed: ");
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        r=r*10 + d;
        n=n/10;
    }
    printf("Reversed number : %d",r);
}
