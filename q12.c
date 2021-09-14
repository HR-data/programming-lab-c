#include<stdio.h>
int swap(int,int);
int main()
	{
	  int m ,n ;
      printf("Enter the number which you want to be swapped : ");
      scanf("%d %d",&m,&n);
      printf("Before swapaing m=%d , n=%d \n",m,n);
      swap(m,n);

	  return 0;
	}

 int swap(int m ,int n)
    {
	    m=m^n;
	    n=m^n;
	    m=m^n;
	
	    printf("After swapping m= %d , n=%d \n",m,n);
        return 0;
	
    }   