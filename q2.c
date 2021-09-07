#include<stdio.h>
#include<stdlib.h>
/*  

	Harsh raj
	21MA60R05
*/

int main ()

	{
	  int n,l,k,t,d,f,c,i;
	  printf("Enter the number \n");
	  scanf("%d",&n);
	  i = n%100;
	  l = n/100;
	  d = l%10;
	  f = l/10;
	  k = i%10;
	  t = i/10;
	  c = f*1000+k*100+t*10+d;
	  printf("After swaping last and third last digit %d \n",c);
	  
	
	
	return 0;
	}
	
	
