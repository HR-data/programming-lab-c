#include<stdio.h>

int main()
    {
       int q1,q2,r1,r2;
       float n,res;
       printf("Enter the decimal number \n");
       scanf("%f",&n);
       int n1 = n*100;
       q1 = n1 / 100;
       r1 = n1 % 100;
       q1 = (q1+11)*100;
       q2 = r1 / 10;
       r2 = r1 % 10;
       q2 = q2 -1;
       r2 = r2 -1;
       if(q2 < 0)
         {
             q2 = 0;
            
         }
        else if (r2 < 0)
          {
              r2 = 0;
          } 
        res = (q1 +10*q2+r2)/100.0;
        printf("The decimal number after increasing and decreasing is %.2f \n",res);



        return 0;
    }