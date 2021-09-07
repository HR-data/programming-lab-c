#include <stdio.h>

/*
     My name is Harsh raj
        21MA60R05
*/

int main()
{
    float n;
    int j,i,k,l;
    printf("Enter the number\n"); // taking input from user 
    scanf("%f",&n);
    i=n*1000;
    j=i/1000;

    k=i%1000;
    l=k%100;



    printf("The new number after deleting the first digit after decimal is %d.%d \n",j,l);

    return 0;
}
