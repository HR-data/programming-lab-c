#include <stdio.h>

int main()
{
    float n;
    int j,i,k,l;
    printf("Enter the number\n");
    scanf("%f",&n); // user input
    i=n*1000;
    j=i/1000;

    k=i%1000;
    l=k/10;


    printf("After deleting last digit after decimal the new number is %d.%d\n",j,l);
    return 0;
}
