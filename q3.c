#include<stdio.h>
#include<math.h>
void dp(float);
int main()
{
    float num;
    printf("Enter the number:");
    scanf("%f",&num);
    dp(num);
    return 0;
}
void dp(float a)
{
    int x,i=1;
    x=a;
    a=a-x;
    printf("The decimal part is %.3f" ,a);
    printf("\n");

}