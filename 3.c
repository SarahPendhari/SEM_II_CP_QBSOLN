#include <stdio.h>
void main()
{
    printf("Numbers from 1 to 100 divisible by 4 and 6 are:\n");
    for(int i=1;i<=100;i++)
    {
        if(i%4==0 && i%6==0)
            printf("%d\n",i);
    }
}
