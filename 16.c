#include <stdio.h>
void main()
{

        int i, j, t, n, a[30],temp;
        printf("Enter the value of n: \n");
        scanf("%d", &n);

        printf("Enter the elements: \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &a[i]);

        for (i = 0; i < n; ++i)
        {

            for (j = i + 1; j < n; ++j)
            {

                if (a[i] > a[j])
                {

                    t =  a[i];
                    a[i] = a[j];
                    a[j] = t;

                }

            }

        }

        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", a[i]);

        for(i=0;i<(n/2);i++)
        {
            temp = a[i];
            a[i] = a[n-i-1];
            a[n-i-1] = temp;
        }
        printf("Descending order sort:\n");
        for(i=0;i<n;i++)
            printf("%d\n",a[i]);

}
