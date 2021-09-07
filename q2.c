#include<stdio.h>

int main()
    {
        int n;
        printf("Enter the number \n");
        scanf("%d",&n);
       for(int i =2 ; i < n+1;i++)
        {
          if (n % i == 0)
           {
               printf("%d is the factor of %d \n",i,n);
           }


        }

        return 0;
    }