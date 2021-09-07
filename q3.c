#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
    {
        char arr[1000];
        printf("Enter the paragraph : \n");
        fgets(arr, sizeof(arr), stdin);


        int l = strlen(arr), vcount=0,ccount =0,bcount=0,pcount=0;
        for(int i = 0; i < l ; i++)
            {
                arr[i]=tolower(arr[i]);
                if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
                    {
                        vcount++;
                    }
                    
                else if ((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z'))
                    {
                          ccount++;
                    }
                   
                else if(arr[i] == '!' || arr[i] == ',' || arr[i] == ';' || arr[i] == '.' || arr[i] == '?' || arr[i] == '-'  || arr[i] == ':')
                    {
                         pcount++;  
                    }
                   
                else if(arr[i] == ' ') 
                    {
                         bcount++;
                    }
               
                       
            }

        printf("The number of vowels in paragraph is %d \n",vcount);
        printf("The number of consonant in paragraph is %d \n",ccount);
        printf("The number of blank space in paragraph is %d \n",bcount);

        printf("The number of punctuation character in paragraph is %d \n",pcount);













        return 0;
    }