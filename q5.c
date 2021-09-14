#include<stdio.h>
#include<math.h>

void add(void);
int main()
    {
        add();
       
        return 0;
    }
void add()
    {  
      int chr;
      int num1 = 0, num = 0;
      printf("Enter the number :");
      while((chr=getchar())!= '.')
        {
            num1 += chr - '0';
        } 
      while((chr=getchar())!= '\n')
        {
           num += chr - '0';
        }
      printf("The sum of decimal part is %d\n", num);   
    }    