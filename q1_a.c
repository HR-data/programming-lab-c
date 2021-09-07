#include <stdio.h>

/*
     My name is Harsh raj
        21MA60R05
*/
int main()
{
    float n;
    int j,i,k;
    printf("Enter the number\n");
    scanf("%f",&n);  // taking input from user 
    i=n*1000;
    j=i/1000;
    k=i%1000;


    printf("The Integer part is %d and The Decimal part is %d \n",j,k);

    return 0;
}
