#include <stdio.h>
#include <conio.h>

void main()
{
    char s[30];
    int i,j,c,flag = 1;
    printf("Enter the string: ");
    gets(s);
    i=0,c=0;

    while(s[i] != '\0')
    {
        i++,c++;
    }
    printf("Length: %d\n",c);

    for(i=0,j=c-1; i<((c-1)/2);i++,j--)
    {
        if(s[i] != s[j])
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1)
    {
        printf("%s is a palindrome.",s);
    }
    else
        printf("%s is not a palindrome.",s);
}
