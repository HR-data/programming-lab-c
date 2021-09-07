/*
     My name is Harsh raj
        21MA60R05
*/
#include<stdio.h>
int main()
    {
        int x ,y ,z;
        printf("Enter the value of x : \n");
        scanf("%d",&x); // taking input from user in x
        printf("Enter the value of y : \n");
        scanf("%d",&y); // taking input from user in y
	 printf("Enter the value of z : \n");
        scanf("%d",&z); // taking input from user in z


        if (x == 0)
        {
            x = y +z;
           
        }
        else if (x == 1)
        {
          x = y-z;
            
        }
        else if (x == 2)
        {
           x = y*z;
           
        }
        else if (x == 3)
        {
           x = y/z;
           
        }
            
	printf("The value of x is %d \n",x);

        return 0;
    }

