#include<stdio.h>
#include<stdlib.h>
/*  

	Harsh raj
	21MA60R05
*/

int main ()

	{
	  int m,n,l,k,t,c,i;
	  printf("Enter the two number\n");
	  scanf("%d %d",&n,&m);
	  i = n%10;
	  l = n/10;
	  k = m%10;
	  t = m/10;
	  c = l*10+k;
	  int d = t*10+i;
	  printf("product of new numbers is  %d \n",c*d);
	  
	
	
	return 0;
	}
