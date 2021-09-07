#include <stdio.h>
#include <string.h>
int main()
{
    int num;
    int j;
    printf("Enter the value 'n' that is number of names you want to enter\n");
    scanf("%d", &num);
    char str[50], last[50];
    printf("Follow one way of giving input , either uppercase or lowercase but not both\n");
    for (int i = 0; i < num; i++)
    {
        if (i == 0)
        {
            printf("Enter the name number %d\n", i + 1);
            scanf("%s", &str);
            strcpy(last, str);
            j = i + 1;
        }
        else
        {
            printf("Enter the name number %d\n", i + 1);
            scanf("%s", &str);
            if (strcmp(last, str) < 0)
            {
                strcpy(last, str);
                j = i + 1;
            }
        }
    }
    printf("Name number %d is last in dictionary order and the name is '%s' \n", j, last);

    return 0;
}