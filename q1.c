#include<stdio.h>
#include<math.h>

int fd(int);
int main()
    {
        int n;
        printf("Enter the number :");
        scanf("%d",&n);
        
        printf("The first digit of %d is %d",n,fd(n));
        printf("\n");
        return 0;
    }
int fd(int n)
    {
        while(n>=10)
            {
                n = n/10;
            }
        return n;
    }    