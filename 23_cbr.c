#include <stdio.h>
void swap(int *, int *);
void main()
{
    int a,b;
    printf("Enter the values of a and b:\n");
    scanf("%d %d",&a,&b);
    printf("Before swapping the values in main a = %d, b = %d\n",a,b);
    swap(&a,&b);
    printf("After swapping values in main a = %d, b = %d\n",a,b);
}
void swap (int *a, int *b)
{
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
    printf("After swapping values in function a = %d, b = %d\n",*a,*b);
}
