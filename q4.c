#include<stdio.h>

int main()
    {

        int n;
        printf("Enter the number for fibbonacci : ");
        scanf("%d",&n);
        int arr[n];
        arr[0] =0;
        arr[1]=1;
        printf("\n");
        printf("The fibonacci series upto %d terms is : %d %d ",n,arr[0],arr[1]);
        for(int i =2; i < n;i++)
            {
                
                arr[i]=arr[0]+arr[1];
                printf("%d ",arr[i]);
                arr[0]=arr[1];
                arr[1]=arr[i];
            }


        return 0;
    }