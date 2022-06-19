#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char s[30],t[30];
    int i;
    printf("Enter string 1:\n");
    gets(s);
    printf("Enter string 2:\n");
    gets(t);
    printf("The length of the string 1 is %d\n",strlen(s));
    printf("The length of the string 2 is %d\n",strlen(t));
    if(strlen(s)>strlen(t))
    {
        printf("The larger string is :");
        puts(s);
    }
    else if(strlen(t)>strlen(s))
    {
        printf("The larger string is:");
        puts(t);
    }
    else
    {printf("Same length");
    }

}
