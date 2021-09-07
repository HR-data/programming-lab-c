#include<stdio.h>
int main()
{
    int num;              
    printf("Enter the number of elements ");
    scanf("%d",&num);    
    int arr[num],m,count; 
	int Maxfrequency = 0;    
    printf("Enter the elements of array by giving one space or enter. ");
    for( int k=0;k<num;k++)   
    {
        scanf("%d",&arr[k]);
    } 
    m=arr[0];
    for(int i = 0; i< num; i++)   
    {
        count = 1;
        for(int j = i+1; j < num; j++)  
        {
            if(arr[j] == arr[i])
            {
                count++;     
                if(count > Maxfrequency)
                {
                    m = arr[j];
                }
            }
        }
    } 
    printf("The number of Maximum repeating element is : %d \n",m);   
    return 0;
}