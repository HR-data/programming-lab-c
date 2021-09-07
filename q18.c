#include <stdio.h>
#include <math.h>

/*  

	Harsh raj
	21MA60R05
*/
int main()
    {
	int n1,n2;
	float n3;
	printf("Enter the values of a, b and c\n");
	scanf("%d%d%f",&n1,&n2,&n3);
	n3=(float)sqrt(n3+pow(n1,2)+pow(n2,2));
	printf("The center of the circle is (%d,%d) and radius is %f \n",-n1,-n2,n3);
	return 0;
    }
