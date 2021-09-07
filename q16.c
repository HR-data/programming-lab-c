#include<stdio.h>
#include<stdlib.h>

int main()
    {
       int ch = 65;
    for(int i=1;i<=5;i++)
      {
           
            for(int j=1;j<=i;j++)
            {
              printf("%c",ch);
              
            }
           ch++;
        printf("\n");
      }
    
        return 0;
    }