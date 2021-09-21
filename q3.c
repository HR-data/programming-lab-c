#include<stdio.h>

int main()
    {
        int n;
        printf("Enter the number :");
        scanf("%d",&n);
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

        return 0;
    }

