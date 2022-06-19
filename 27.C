#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char s[30], t[30];
    printf("Enter the first string: ");
    gets(s);
    printf("The length of the first string: %d\n",strlen(s));
    printf("The first string in lowercase: %s\n",strlwr(s));
    printf("The first string in uppercase: %s\n",strupr(s));
    printf("Reverse of the first string: %s\n",strrev(s));
    printf("Enter the second string: ");
    gets(t);
    printf("\nThe concatenation of both the strings: %s\n",strcat(s,t));

    return 0;
}
