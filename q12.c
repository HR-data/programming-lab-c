#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*  

	Harsh raj
	21MA60R05
*/


int main ()

	{
	  int a,b,c,r,p,q;
	  printf("Enter the a ,b ,c and then Enter the raduis of circle r then enter the center of circle p , q is : :. \n");
	  scanf("%d %d %d %d %d %d", &a,&b,&c,&r,&p,&q);
	  int h = (a*p + b*q + c)/(sqrt(pow(a,2)+pow(b,2)));
	   if (h > r )
	     {
	     printf("line lie outside the circle \n.");
	     }
	  else if (h < r) 
	     {
	      printf("line intersect the circle \n.");
	     }
	  else 
	     {
	      printf("line touches the circle \n.");
	     }    
	   	  	
	return 0;
	}
