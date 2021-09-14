#include<stdio.h>
#include<math.h>

int ld(int);
int main()
    {
        int n;
        printf("Enter the number :");
        scanf("%d",&n);
        
        printf("The last digit of %d is %d",n,ld(n));
        printf("\n");
        return 0;
    }
int ld(int n)
    {
        while(n>=10)
            {
                n = n%10;
            }
        return n;
    }    