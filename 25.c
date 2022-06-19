#include <stdio.h>
#include <conio.h>

struct student
{
    int rollno;
    char name[30];
    float m1,m2,m3,total,avg;
};
void main()
{
    struct student s[10],t;
    int i,n,j;
    printf("Enter the number of students: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter Roll no., Name, P,C,M marks in the same order:\n");
        scanf("%d %s %f %f %f",&s[i].rollno,&s[i].name,&s[i].m1,&s[i].m2,&s[i].m3);

        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
        s[i].avg = s[i].total/3;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<(n-1);j++)
        {
            if(s[j].total<s[j+1].total)
            {
                t = s[j];
                s[j] = s[j+1];
                s[j+1] = t;
            }
        }
    }
    printf("Sorted Student List:\n");
    printf("Roll no.\tName\tPhysics\tChemistry\tMaths\tTotal\tAverage\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t%s\t%.2f\t%.2f\t\t%.2f\t%.2f\t%.2f\t\n",s[i].rollno,s[i].name,s[i].m1,s[i].m2,s[i].m3,s[i].total,s[i].avg);
    }
}
