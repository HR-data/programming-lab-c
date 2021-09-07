#include<stdio.h>
int main()
 {
    int num,count_=0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    printf("The smallest and second smallest factors of %d are :",num);
    for(int i=2;i<=num;i++)
    {
        if(num % i== 0)
        {
            ++count_;
            printf("%d, \n ",i);

        }
        if(count_==2)
        {
            break;
        }
    }

  return 0;
 }