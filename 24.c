#include <stdio.h>
#include <conio.h>

void printa(int a[30], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

void asort(int a[30],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<(n-1);j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printa(a,n);
}
void dsort(int a[30],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<(n-1);j++)
        {
            if(a[j+1]>a[j])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printa(a,n);
}
void search(int a[30], int v,int n)
{
    int flag = 1;
    for(int i=0;i<n;i++)
    {
        if(v == a[i])
        {
            flag=0;
            break;
        }

    }
    if(flag == 0)
            printf("%d exists in the array.",v);
        else
            printf("%d does not exist in the array.",v);
}
void insert(int a[30],int value,int pos,int n)
{
    for(int i=(n-1);i>=(pos-1);i--)
    {
        a[i+1] = a[i];
    }
    a[pos-1] = value;
    printa(a,n);
}

void main()
{
    int a[50],n,i,j,choice,v,pos,value;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter choice\n1.Ascending sort\n2.Descending Sort\n3.Insert\n4.Search\n");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("Array in ascending order:\n");
        asort(a,n);
        break;

    case 2:
        printf("Array in descending order:\n");
        dsort(a,n);
        break;

    case 3:
        printf("Enter value and position for insertion:\n");
        scanf("%d %d",&value,&pos);
        insert(a,value,pos,n);
        break;

    case 4:
        printf("Enter value to be searched:\n");
        scanf("%d",&v);
        search(a,v,n);
        break;

    default:
        printf("Please choose a valid option.");
    }
}

