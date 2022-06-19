#include <stdio.h>
#include <conio.h>

void main()
{
    int i,j,flag;
    printf("Prime numbers between 75 to 150:\n");
    for(i=75;i<=150;i++)
    {
        flag=0;
        for(j=75;j<=(i/2);++j)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("%d\n",i);
    }
}
