#include<stdio.h>
#include<string.h>

int main ()
    {
        char arr1[100],arr2[100];
        printf("Enter the charcters for both arr1 and aar2 followed by enter or space \n");
        scanf("%s %s",arr1,arr2);
        int total1 = 0 , count1 = 0 , total2 =0, count2=0;
        int l ;
        if(strlen(arr1)>strlen(arr2))
            l = strlen(arr1);
        else
           l = strlen(arr2);  
        printf("Characters are as follows : ")  ;
        for(int i =0; i < l; i++)
          {
              if (arr1[i]!= '\0')
                   count1++;
              if (arr2[i]!= '\0')
                   count2++;    
             printf("%c %c ",arr1[i],arr2[i]);     
          }
          printf("\n");
        printf("Number of character in arr1 is %d and arr2 is %d \n",count1,count2);
        return 0;
    }