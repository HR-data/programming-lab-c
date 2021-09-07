#include<stdio.h>
#include<stdlib.h>
/*  

	Harsh raj
	21MA60R05
*/


int main ()

	{
	  int num1,num2;
	  printf("Enter the two numbers \n");
	  scanf("%d %d", &num1,&num2);
	  
	  if (num1 > num2)
	  	{
	  	  printf("Number first is greater than second and the number is %d \n",num1);
	  	}
	  else if (num1 < num2)
	  	{
	  	  printf("Number second is greater than first and the number is %d \n",num2);
	  	}
	   else 
	  	{
	  	  printf("Number first is equal to second and the number are num1 = %d and num 2 = %d \n",num1,num2);
	  	} 	  	  
	  
	
	return 0;
	}
