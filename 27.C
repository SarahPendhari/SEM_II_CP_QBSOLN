#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char s[30], t[30],s1[30],w[30];
    int e,d;
    printf("Enter the first string: ");
    gets(s);
    printf("\nEnter the second string: ");
    gets(t);
    d=strlen(s);
    e=strlen(t);
    printf("\nThe length of the strings respectively: %d,%d",d,e);
    printf("\nThe first string in lowercase: %s\n",strlwr(s));
    printf("\nThe first string copied: %s\n",strcpy(s1,s));
    printf("\nReverse of the first string: %s\n",strrev(s));
    printf("\nThe concatenation of both the strings: %s\n",strcat(s,t));


    return 0;
}
