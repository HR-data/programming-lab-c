#include <stdio.h>

int main()
{
    char arr[10];
    char ch;
    printf("Enter 10 characters \n");
    for (int i = 0; i < 10; i++)
    {  
        scanf("%c", &arr[i]);
        getchar();                                 //absorbs the buffer enter or space
        if(i==9)
            break;
    }
    

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] >= 'A' && arr[i] <= 'Z')
            printf("'%c' is uppercase letter \n", arr[i]);
        else if (arr[i] >= 'a' && arr[i] <= 'z')
            printf("'%c' is lowercase letter \n", arr[i]);
        else
            printf("'%c' is neither uppercase nor lowercase letter \n", arr[i]);
    }

    return 0;
}