#include <stdio.h>
#include <conio.h>

void main()
{
    int f1,f2,f3,value,i,n,flag=1;
    printf("Enter value to be searched and no.of terms: ");
    scanf("%d %d",&value,&n);
    f1=0;f2=1;i=1;
    printf("%d\t %d\t",f1,f2);
    while(i<=(n-2))
    {
        f3 = f2 + f1;
        printf("%d\t",f3);
        if(f3==value)
            flag=1;
        else
            flag=0;
        f1=f2;
        f2=f3;
        i++;
    }
    if(flag==1)
        printf("\n%d is present in the series.",value);
    else
        printf("\n%d is not present in the series.",value);
}
