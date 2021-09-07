#include<stdio.h>

int main()
    {
        int k = 0;
        for(int i = 0 ;i <5;i++)
          {  
              for(int j = 0 ;j < 5-i ;++j)
                 {
                   printf(" ");
                 }
                while(k!=2*i+1)
                  {
                      printf("* ");
                      ++k;
                  } 
               k=0;
               printf("\n");
          }
        return 0;
    }