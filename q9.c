#include<stdio.h>
#include<math.h>

int main()
    {
        int x1,x2,x3,y1,y2,y3;
        printf("Enter all the three co ordinates (x1,y1),(x2,y2),(x3,y3): \n");
        scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
        int check_= x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
        if (check_ == 0)
         {
             printf("The points are collinear.\n");
         }
        else
        {
            printf("The points are not collinear.\n");
            printf("The area of traingle is %d \n",check_);
        } 
        int p = pow(x1-x2,2)+pow(y1-y2,2);
        int b = pow(x2-x3,2)+pow(y2-y3,2);
        int h = pow(x1-x3,2)+pow(y1-y3,2);

        if ((p>0 && b>0 && h > 0)&&(p == b+h || b == p+h || h == p+b))
          {
              printf("The traingle is right angled traingle.\n");
          }
        else
          {
              printf("the traingle is not right angled triangle. \n");
          }  
        return 0;
    }