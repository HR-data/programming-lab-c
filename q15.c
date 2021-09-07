#include <stdio.h>


/*  

	Harsh raj
	21MA60R05
*/

int main() 
     {
	   int num;
	  printf("Enter the sales amount\n");
	   scanf("%d",&num);
	    if (num >= 30001)
	        printf("You get commission of 15%% \n");
	    else if(num >= 22001 && num <= 30000 )
	        printf("You get commission of 10%%\n");
	    else if(num >= 12001 && num <= 22000)  
	        printf("You get commission of 7%%\n");
	    else if(num >= 5001 && num <= 12000)   
	        printf("You get commission of 3%% \n");
	    else
	        printf("You will get no commision\n");
	    return 0;
     }
