#include <stdio.h>


/*
     My name is Harsh raj
        21MA60R05
*/

int main()
{
    float n;
    int i,j,k;
    printf("Enter the number\n");  // taking input from user
    scanf("%f",&n);
    i=n*1000;
    k=i%1000;
    i=k%10+k/100+(k/10)%10;
    printf("The sum of digits after decimal is %d \n",i);

    return 0;
}
