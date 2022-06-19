#include <stdio.h>
#include <Conio.h>

void main()
{
    int a[30],i,n,sum=0,avg=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum = sum + a[i];
        avg = sum/n;
    }

    printf("Sum: %d\n",sum);
    printf("Average: %d",avg);
}
