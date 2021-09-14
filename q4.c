#include<stdio.h>
#include<math.h>

int fact(int);
int main()
    {
        int n;
        printf("Enter the positive number :");
        scanf("%d",&n);
        
        printf("The factorial of %d is %d",n,fact(n));
        printf("\n");
        return 0;
    }
int fact(int n)
    {  
        int f=1;
        for(int i =1 ; i <=n;i++)
            {
               f=f*i; 
            }
        return f;    
    }    