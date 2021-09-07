#include<stdio.h>
#include<ctype.h>
int main()
{
    int i;
    char sarr[11];
    printf("Enter the 10 characters:\n");

    for (i=0;i<10;i++)
    {
        sarr[i]=getchar();
    }
    if(islower(sarr[0])==islower(sarr[1])&&islower(sarr[0])==islower(sarr[2])&&islower(sarr[0])==islower(sarr[3])
       &&islower(sarr[0])==islower(sarr[4])&&islower(sarr[0])==islower(sarr[5])
       &&islower(sarr[0])==islower(sarr[6])&&islower(sarr[0])==islower(sarr[7])
       &&islower(sarr[0])==islower(sarr[8])&&islower(sarr[0])==islower(sarr[9])&&islower(sarr[0])!=0)
    {
         printf("The leeters are lowercase \n");

    }
    else if(isupper(sarr[0])==isupper(sarr[1])&&isupper(sarr[0])==isupper(sarr[2])&&isupper(sarr[0])==isupper(sarr[3])
       &&isupper(sarr[0])==isupper(sarr[4])&&isupper(sarr[0])==isupper(sarr[5])
       &&isupper(sarr[0])==isupper(sarr[6])&&isupper(sarr[0])==isupper(sarr[7])
       &&isupper(sarr[0])==isupper(sarr[8])&&isupper(sarr[0])==isupper(sarr[9])&&isupper(sarr[0])!=0)
    {
         printf("Theletters are  in uppercase \n");

    }
    else printf("The chacters are both upper and loer case \n");


    return 0;
}
