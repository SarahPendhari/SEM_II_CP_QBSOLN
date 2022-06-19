#include <stdio.h>
void main()
{
    int b,h;
    float area;
    printf("Enter the base and height of a triangle:\n");
    scanf("%d %d",&b,&h);
    area=0.5*b*h;
    printf("Area of the triangle: %.2f",area);
}
