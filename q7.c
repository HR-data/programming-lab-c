#include<stdio.h>
#include<stdlib.h>

void check(void);
int main ()

	{
	  check();
	
	return 0;
	}
void check()
    {
        int num;
	    printf("Enter the number: \n");
	    scanf("%d",&num);
	    if (num % 7 ==0 || num % 9 == 0)
	  	 {
	  	  printf("The number is divisble by 9 or 7 and the number is  %d . \n",num);
	  	
	  	 }
        else
         {
             printf("It is not divisble by 7 or 9. \n");
         }   
    }    