#include<stdio.h>

int main()
    {
        int num;
        printf("Enter the number . \n");
        scanf("%d",&num);
        int count = 0;
        while(num != 0)
          {
             num = num/10;
             ++count;
          }
        printf("The number of digits is %d \n",count) ; 
        return 0;
    }