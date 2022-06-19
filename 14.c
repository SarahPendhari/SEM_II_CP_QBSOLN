#include <stdio.h>

void main()
{
    int a[30],n,i,e=0,o=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            e++;
        }
        if(a[i]%2!=0)
        {
            o++;
        }

    }

    printf("Count of even numbers: %d\n",e);
    printf("Count of odd numbers: %d",o);
}
