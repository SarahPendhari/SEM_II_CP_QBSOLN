#include <stdio.h>
#include <conio.h>

void transpose(int a[5][5], int m, int n)
{
    int i,j,b[5][5];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            b[j][i] = a[i][j];
        }
    }
    printf("Transpose Matrix:\n");
                for(i=0;i<n;i++)
                {
                 for(j=0;j<m;j++)
                    {
                        printf("%d\t",b[j][i]);
                    }
                printf("\n");
                }
}
void main()
{
    int a[5][5],m, n,i,j;
    printf("Enter order of Matrix m,n: ");
    scanf("%d %d",&m,&n);
    printf("Enter the elements of matrix :\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
    transpose(a,m,n);
}
