#include <stdio.h>


/*
     My name is Harsh raj
        21MA60R05
*/
int main()
{
    float n;
    int j,i,k,l;
    printf("Enter the number\n"); // input user
    scanf("%f",&n);
    i=n*1000;
    j=i/1000;

    k=i%1000;
    l=10*(k/100)+k%10;


    printf("The new number after delelting the second last digit after the decimal is %d.%d \n",j,l);
    return 0;
}
