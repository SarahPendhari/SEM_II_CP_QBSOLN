#include <stdio.h>
void main()
{
 int i, n, rem, result;
 for (i = 100; i <= 999; i++)
 {
  n = i;
  result = 0;
  while (n > 0)
  {
   rem = n % 10;
   result = result + rem * rem * rem;
   n = n / 10;
  }
 if (result == i)
 printf("\n%d", i);
 } }
