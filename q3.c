#include<stdio.h>
#include<stdlib.h>
/*  

	Harsh raj
	21MA60R05
*/

int main ()

	{
	  int n,l,k,t,c,i;
	  printf("Enter the number \n");
	  scanf("%d",&n);
	  i = n/10;
	  l = n%10;
	  k = n/100;
	  t = k*10+l;
	  c = i*t;
	  printf("product after manupliating %d \n",c);
	  
	
	
	return 0;
	}
