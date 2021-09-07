#include <stdio.h>
#include <string.h>
int main()
    { 
        int i,j,n,p1,p2;
        char arr1[100],arr2[100];
        printf("Enter the two names\n");
        scanf("%s %s",arr1,arr2);
        p1=strlen(arr1);
        p2=strlen(arr2);
        if(p1>p2)
          n=p1;
        else
          n=p2;
        for(i=0;i<n;i++)
            {

            if(arr1[i]<arr2[i])
              {
              printf("The lexicographic order is %s then %s \n",arr1,arr2);
              break;
              }
            else if(arr1[i]>arr2[i])
              {
                printf("The lexicographic order is %s then %s \n",arr2,arr1);
                break;
              }
            else
            continue;

             }
       return 0;
    }