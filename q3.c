#include<stdio.h>

int main()
    {
        int n,sum = 0;
        printf("Enter the number \n");
        scanf("%d",&n);
       for(int i =2 ; i < n+1;i++)
        {
          if (n % i == 0)
           {
              sum +=i;
           }


        }
        printf("The sum is %d \n",sum);
        return 0;
    }