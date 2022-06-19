#include <stdio.h>
#include <conio.h>

void main()
{
    int a[5][5], m,n,sum=0,avg=0;
    printf("Enter order of the array: ");
    scanf("%d %d",&m,&n);
    printf("Enter the elements of the array:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            sum = sum + a[i][j];
            avg = sum/(m+n);
        }
    }
    printf("Sum: %d\n",sum);
    printf("Average: %d",avg);
}
