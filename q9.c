#include<stdio.h>
#include<stdlib.h>
/*  

	Harsh raj
	21MA60R05
*/


int main ()

	{
	  int num1;
	  printf("Enter the numbers \n");
	  scanf("%d", &num1);
	  
	  if (num1 > 0)
	  	{
	  	  printf("Number is positive and the number  is %d \n",num1);
	  	}
	  else if (num1 < 0)
	  	{
	  	  printf("Number is negative and the number  is %d \n",num1);
	  	}
	   else 
	  	{
	  	  printf("Number is zero and the number is %d \n",num1);
	  	} 	  	  
	  
	
	return 0;
	}
