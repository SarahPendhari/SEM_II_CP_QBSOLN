#include <stdio.h>
void main()
{
   int flag,i, j;
   printf("Prime numbers from 75 and 150 are:\n");
   for(i=50; i<150; ++i)
   {
      flag=0;
      for(j=2; j<=i/2; ++j)
      {
         if(i%j==0)
         {
            flag=1;
            break;
         }
      }
      if(flag==0)
         printf("%d\n",i);
  }
}
