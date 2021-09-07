#include<stdio.h>

int main()
    {
      int n;
      printf("Enter the positive number. \n");
      scanf("%d",&n);
      if (n <= 0)
       {
         printf("Wrong input ! Please input positive number :\n");
         scanf("%d",&n);
       }
       int count = 0;
      while (n!=1)
        {
          if(n % 2 == 0)
           {
             n = n /2;
           }
          else
           {
             n = n*3+1;
           } 

          ++count ;

        }

        printf("The number of operation performed is %d.\n",count);
       
        return 0;
    }