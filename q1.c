#include<stdio.h>


int main()
    {
        int num;
        printf("Enter the number :");
        scanf("%d",&num);
        float f[25];
        int j;
        for(int i =0 ; i < num;i++)
            {
                f[1]= 1+1/((float)num);
                 j =1;
                while(j <num)
                    {
                        f[j+1] = 1+ 1/f[j];
                        j++;
                    }
            }
        printf("f[%d]=%.3f",num,f[j]); 
        printf("\n");   
        

        return 0;
    }

