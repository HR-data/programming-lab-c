#include<stdio.h>
#include<math.h>

double root(double,double,double);
int main()
    {
        double a,b,c;
        printf("Enter the number a , b , c :");
        scanf("%lf %lf %lf",&a,&b,&c);
        printf("You have entered the a = %.2lf , b = %.2lf, c = %.2lf \n",a,b,c);
        root(a,b,c);
        printf("\n");
        return 0;
    }
double root(double a, double b,double c)
    {
       double d = pow(b,2)-4*a*c ;
       if(d > 0)
        {
            double r1= (-b+sqrt(d))/(2*a);
            double r2= (-b-sqrt(d))/(2*a);
            printf("The roots are distinct and real & the roots are %.2lf & %.2lf",r1,r2);
        }
       else if(d == 0)
        {
            double r1= (-b)/(2*a);
       
            printf("The roots are equal and real & the root is %.2lf ",r1);
        }
       else
        {
            double realPart = -b / (2 * a);
            double imagPart = sqrt(-d) / (2 * a);
            printf("The roots are complex & the real and imaginary part are %.2lf ,%.2lf",realPart , imagPart);
        }
        return 0;
    }    