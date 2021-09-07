#include<stdio.h>

//21MA60R05

int main()
	{
		int x ;
		printf("Enter the number : \n");
		scanf("%d",&x);
		if (x % 2 == 0)
			{
				x = x-1;
				printf("The number is now %d \n",x);
			}
		else
			{
				x = x+1;
				printf("The number is now %d \n",x);
				
			
			}	
	
		return 0;
	}
