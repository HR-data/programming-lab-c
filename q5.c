/*
     My name is Harsh raj
        21MA60R05
*/
#include<stdio.h>
int main()
    {
        int x ;
        printf("Enter the marks of student is : \n");
        scanf("%d",&x); // taking input from user in x

        if ( x > 90)
        {
          
            printf("The grade of student is 'Ex' \n");

        }
        else if (x>=80 && x<89)
        {
            printf("The grade of student is 'A' \n");

        }
        else if (x >= 70 && x < 79)
        {
           printf("The grade of student is 'B' \n");

        }
        else if (x >= 60 && x < 69)
        {
           printf("The grade of student is 'C' \n");

        }
        else if (x >= 60 && x < 59)
        {
           printf("The grade of student is 'D' \n");

        }
        else if (x >= 35 && x < 49)
        {
           printf("The grade of student is 'P' \n");
           

        }
        else 
        {
           printf("The grade of student is 'F' \n");

        }
            
                
            


        return 0;
    }

