#include <stdio.h>
#include <math.h>
/*  

	Harsh raj
	21MA60R05
*/

int main()
{
	float a,b,c,n;
	printf("Enter the values of a, b and c\n");
	scanf("%f%f%f",&a,&b,&c);
	n=pow(b,2)-4*a*c;
	if(n>0)
          {
            float t1 = (-b+sqrt(n))/(2*a);
            float t2 = -b-sqrt(n)/(2*a);
            printf("JHence the roots are real and roots are %.2f and %.2f \n",t1,t2);
          }
	else if (n==0)
	  {
	    printf("Hence the roots are equal and root is %.2f \n",-b/(2*a));
	  }
	else
	  {
	    float t3 = -b/(2*a);
	    float t4 = sqrt(-n)/(2*a);
	    printf("Hence the roots are complex. Real part is %.2f and imaginary part is %.2f \n",t3,t4);
	  }
	return 0;
}
