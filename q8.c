#include<stdio.h>
#include<math.h>

double x_power_n(double);
int main()
    {

        double p,b;
        printf("Enter the perpendicular and base of right angled traingle traingle.");
        scanf("%lf %lf",&p,&b);
        printf("The hypotenuse is %.2lf",sqrt(x_power_n(p)+x_power_n(b)));
        printf("\n");

        return 0;
    }
double x_power_n(double p )
    {
        return p*p;
    }