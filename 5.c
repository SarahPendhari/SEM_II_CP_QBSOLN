#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Odd numbers from 1 to 100 not divisible by 5 are:\n");
    for(int i=1;i<=100;i++)
    {
        if(i%5!=0)
            printf("%d\n",i);
    }
}
