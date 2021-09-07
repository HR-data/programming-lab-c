#include <stdio.h>
int main()
{
	int i=1,j=2,k,f,n;
	
	printf("Enter an integer n to find out first n prime numbers: ");
	scanf("%d",&n);
	int arr[n];
	
printf("The first %d prime numbers are : \n",n);
while(i<=n)
    {
        f=1;
        for(k=2;k<=j-1;k++)
        {
            if(j%k==0)  
            {
             f=0;
             break;     
            }  
        }
            if(f==1)
            {
              arr[i]=j ;
             i++;
            }
        j++;
    }
    for(i=1;i<=n;i++)
       printf("%d ",arr[i]);

    printf("\n")  ; 
return 0;
}