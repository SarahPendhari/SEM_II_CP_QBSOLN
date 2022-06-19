#include <stdio.h>
#include <conio.h>
void main()
{
    int n,i,flag=0;
    printf("Enter the number to be checked: ");
    scanf("%d",&n);
    if(n%2==0)
        printf("%d is an even number.\n",n);
    else
        printf("%d is an odd number.\n",n);
    if(n==sqrt(n)*sqrt(n))
        printf("%d is a perfect square.\n",n);
    else
        printf("%d is not a perfect square.\n",n);
    if (n == 0 || n == 1)
    flag = 1;

  for (i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

  // flag is 0 for prime numbers
  if (flag == 0)
    printf("%d is a prime number.\n", n);
  else
    printf("%d is not a prime number.\n", n);
}

