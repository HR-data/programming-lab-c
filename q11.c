#include <stdio.h>
#include <math.h>
int procsum(int );
int main()
{
    int n,add;
    printf("Enter the number: \n");
    scanf("%d",&n);
    printf("The product sum of even number is %d.",procsum(n));
    printf("\n");
    return 0;

}
int procsum(int n)
{
    int arr[10];
    int d,i=0;
    int add=0;
    while(n!=0)
    {
        d=n%10;
        if(d%2==0)
        {
            arr[i]=d;
            i++;
        }
        n=n/10;
    }
    for(int j=0;j<i;j++)
    {
      if((arr[j]-arr[j+1])==2)
      {
          add+=arr[j]*arr[j+1];
      }
    }
    return (add);
}
