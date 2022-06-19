#include <stdio.h>
#include <conio.h>

int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
void main()
{
    int n,r,ncr;
    printf("Enter the number and r:\n");
    scanf("%d %d",&n,&r);

    ncr = fact(n)/(fact(n-r)*fact(r));

    printf("nCr = %d",ncr);
}
