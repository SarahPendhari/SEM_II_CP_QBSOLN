#include <stdio.h>
#include <conio.h>

void mul(int a[5][5],int b[5][5], int m, int n, int p, int q)
{
    if(n == p)
    {
        int i,j,k,c[5][5];
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                c[i][j] = 0;
                for(k=0;k<n;k++)
                {
                    c[i][j] = c[i][j] + (a[i][k]*b[k][j]);
                }
            }

        }
            printf("Resultant Matrix:\n");
                for(i=0;i<m;i++)
                 {for(j=0;j<q;j++)
                {
                    printf("%d\t",c[i][j]);
                }
                printf("\n");}
        }
}


void main()
{
    int a[5][5], b[5][5], m, n, p, q,i,j;
    printf("Enter order of A Matrix m,n: ");
    scanf("%d %d",&m,&n);
    printf("Enter the elements of matrix A:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
    printf("Enter order of B Matrix p,q: ");
    scanf("%d %d",&p,&q);
    printf("Enter the elements of matrix B:\n");
    for(i=0;i<p;i++)
        for(j=0;j<q;j++)
    {
        scanf("%d",&b[i][j]);
    }
    mul(a,b,m,n,p,q);
}
