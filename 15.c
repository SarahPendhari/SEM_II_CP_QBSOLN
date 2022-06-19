#include <stdio.h>
#include <conio.h>

void main()
{
    int a[30],n,i,max,min;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max = a[0];
    min = a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
            max = a[i];
        if(min>a[i])
            min = a[i];
    }
    printf("Min: %d\n",min);
    printf("Max: %d\n",max);
}
