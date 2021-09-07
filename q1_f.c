#include <stdio.h>



/*
     My name is Harsh raj
        21MA60R05
*/
int main()
{
    float n;
    int i,j,k;
    printf("Enter the number\n"); // taking input from user
    scanf("%f",&n);
    i=n*1000;
    j=i/1000;
    k=i%1000;
    printf("The new number after swapping digits after the decimal is %d.%d \n",k,j);
    return 0;
}
