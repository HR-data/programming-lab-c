#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,n,mode,a,m,count,mmxfre=0;
	float average,median,total=0;              
    printf("Enter the number of elements ");
    scanf("%d",&n);    
    int arr[n]; 
    printf("Enter the array elements");
    //average
    for( i=0;i<n;i++)   
    {
        scanf("%d",&arr[i]);
    } 
     for( i=0; i<n; i++)
    {
    total = total+arr[i];
    }
    average = total/n;
    printf("\nThe average value is: %.2f",average);
    //median
  
    for (i = 0; i < n; ++i) 
	{
     for (j = i + 1; j < n; ++j)
    {
     if (arr[i] > arr[j]) 
     {
     a =  arr[i];
    arr[i] = arr[j];
    arr[j]=a;
    }
    }
    }
   
     if(n%2==0)
    	median=(float)((arr[n/2-1]) +(arr[(n/2)]))/2;
    	else
    	median=(arr[(n+1)/2-1]);
	
	printf("\nThe median value is: %.2f",median);


for(i = 0; i< n; i++)   
    {
        count = 1;
        for(j = i+1; j < n; j++)  
        {
            if(arr[j] == arr[i])
            {
                count++;     
                if(count > mmxfre)
                {
                    mode = arr[j];
                }
            }
        }
    } 
    printf("\n The mode value is: %d \n",mode);  
    return 0;
	}
	