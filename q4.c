/*
     My name is Harsh raj
        21MA60R05
*/
#include<stdio.h>
int main()
    {
        int x ,y ;
        printf("Enter the value of x : \n");
        scanf("%d",&x); // taking input from user in x

        if (x>10 && x<30)
        {
            y = x + 15;
            printf("The value of y is %d \n",y);

        }
        else if (x>50 && x<70)
        {
            y = 3*x;
            printf("The value of y is %d \n",y);

        }
        else
        {
           y = x-5;
           printf("The value of y is %d \n",y);
        
        }
            


        return 0;
    }

