#include<stdio.h>
void fun2(int);

int main()
    {
        int num;
        printf("Enter the number :");
        scanf("%d",&num);
        fun2(num);

        return 0;
    }

void fun2(int n)
    {
        float f[25];
        int j;
        for(int i =0 ; i < n;i++)
            {
                f[1]= 1+1/((float)n);
                 j =1;
                while(j <n)
                    {
                        f[j+1] = 1+ (float)(j+1)/f[j];
                        j++;
                    }
            }
        printf("f[%d]=%.3f",n,f[j]); 
        printf("\n");   
    }    