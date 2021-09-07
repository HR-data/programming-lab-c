#include<stdio.h>

int main()
    {
        int num,n3;
        printf("Enter the number . \n");
        scanf("%d",&num);
        int n1 =0;
        int n2 =1;
        n3 = n1 +n2;
        printf("Fibbonaacci series is : %d ,%d , ",n1,n2);
        for (int i = 3 ; i < num+1 ; i++)
         { 
           printf("%d,",n3);
           n1 =n2;
           n2 = n3;
           n3= n1 +n2;
          
           
         }
        printf("\n");
        return 0;
    }