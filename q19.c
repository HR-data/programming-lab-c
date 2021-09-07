#include <stdio.h>
int main()
{
    int n1,n2,n3;
    
    printf("Enter marks of Maths, Physics and Chemistry: \n ");
    
    scanf("%d %d %d",&n1,&n2,&n3);
    
    if((n1>=60 && n2>=50 && n3>=40) && (n1+n2+n3>=200 || n1+n2>=150))
       {
        printf("The student is eligible \n");

       }
    else
        {
        printf("The student is not eligible\n");
        }

    return 0;
}
