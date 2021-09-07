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
	  i = n%100;
	  l = n/100;
	  k = i%10;
	  t = i/10;
	  c = l*100+k*10+t;
	  printf("After swaping last and second last digit %d \n",c);
	  
	
	
	return 0;
	}
