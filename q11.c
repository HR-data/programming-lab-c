#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*  

	Harsh raj
	21MA60R05
*/


int main ()

	{
	  int p,b;
	  printf("Enter the perpendicular and base of right angled traingle \n");
	  scanf("%d %d", &p,&b);
	  p = pow(p,2);
	  b = pow(b,2);
	  int h = sqrt(p+b);
	  printf("Hypotenuse is %d .\n",h);
	   	  	
	return 0;
	}
