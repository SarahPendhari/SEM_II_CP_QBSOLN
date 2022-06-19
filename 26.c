#include <stdio.h>
union person
{
 char name[20];
 int id;
};
void main()
{
 union person p;
 int choice;
 printf("Enter your information\n1.Name\n2.ID number\nEnter your choice : ");
 scanf("%d", &choice);
 switch (choice)
 {
 case 1:
 printf("\nEnter your name : ");
 scanf("%s", p.name);
 break;
 case 2:
 printf("\nEnter your ID number : ");
 scanf("%d", &p.id);
 break;
 default:
 printf("\nInvalid Input Choice");
 break;
 }
 if (choice == 1)
 printf("\nYour Name entered is %s", p.name);
 else if (choice == 2)
 {
 printf("\nYour ID entered is %d", p.id);
 } }
