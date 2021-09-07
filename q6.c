#include<stdio.h>
#include<stdlib.h>
/*  

	Harsh raj
	21MA60R05
*/


int main ()

	{
	  for (int i = 0 ; i < 1001; i++)
	  	{   
	  	   int n = i/10;
	  	   int k = n%10;
	  	   if ( k>4 && k<9)
	  		{
	  			
	  		printf("%d \n",i);
	  			
	  		}
	  		
	  	}
	  
	   printf("The above numbers second last digit is between 5 and 8. \n");
	
	
	return 0;
	}
