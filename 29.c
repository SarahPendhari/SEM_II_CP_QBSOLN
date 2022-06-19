#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char s[80];
    int i = 0, count = 0;
    printf("Enter the string: ");
    gets(s);

    while(s[i] != '\0')
    {
        if(s[i] == 'a'|| s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'u')
        {
            count++;
        }
        i++;
    }
    printf("The number of vowels in the string are: %d",count);
}
