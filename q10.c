#include<stdio.h>
#include<stdlib.h>
/*  

	Harsh raj
	21MA60R05
*/


int main ()

	{
	  int num1;
	  printf("Enter the leap year \n");
	  scanf("%d", &num1);
	  
	  if (num1 % 400 == 0 || num1%4 == 0 && num1%100 != 0)
	  	{
	  	  printf("Year is leap year and the year is %d. \n",num1);
	  	}
	  else {
	  	  printf("Year is not leap year and the year is %d .\n",num1);
	  	}
	   	  
	  
	
	return 0;
	}
