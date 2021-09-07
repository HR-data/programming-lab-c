#include<stdio.h>
#include<stdlib.h>
/*  

	Harsh raj
	21MA60R05
*/


int main ()

	{
	  for (int i = 0 ; i < 101; i++)
	  	{   
	  	   int n = i%10;
	  	   if ( n%3 == 0)
	  		{
	  			
	  		printf("%d \n",i);
	  			
	  		}
	  		
	  	}
	  
	   printf("The above numbers last digit is divisble by 3. \n");
	
	
	return 0;
	}
