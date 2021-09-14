#include<stdio.h>
#include<math.h>

int del(int);
int main()
    {
        int n;
        printf("Enter the number :");
        scanf("%d",&n);
        printf("The new number is  %d is %d",n,del(n));
        printf("\n");
        return 0;
    }
int del(int n)
    {
       int x1 =0, x2 = n;
       while(x2/10 !=0)
        {
            x1+=1;
            x2=x2/10;
        }
        x2=pow(10,x1);
        n=n%x2;
        return n;
        
    }    