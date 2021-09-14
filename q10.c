#include<stdio.h>
#include<math.h>
void del( int);
int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    del(num);
    return 0;
}
void del( int x)
{
     int i,j,d;
    i=x;
    j=0;
    while(i/10!=0)
    {
        j=j+1;
        i=i/10;
    }
    d=pow(10,j);
    x=x%d;
    d=pow(10,j-1);
    x=x%d;
    printf("The number after deleting the second digit of the entered number is %d%d",i,x);
    printf("\n");
}