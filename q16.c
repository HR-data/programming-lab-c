#include <stdio.h>
/*  

	Harsh raj
	21MA60R05
*/


int main()
    {
	    int n1,n2,n3,n4,n5,Max,Min;
	    printf("Enter the five numbers:\n");
	    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
	    Max=n1;
	    Min=n1;
	    if (n2 > Max)
		Max = n2;
	    if (n3 > Max)
		Max = n3;
	    if (n4 > Max)
		Max = n4;
	    if (n5 > Max)
		Max = n5;

	    if (n2 < Min)
		Min = n2;
	    if (n3 < Min)
		Min = n3;
	    if (n4 < Min)
		Min = n4;
	    if (n5 < Min)
		Min = n5;
	    printf("The maximum number is %d and the minimum number is %d \n",Max,Min);

	  return 0;
    }
