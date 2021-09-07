#include <stdio.h>

/*  

	Harsh raj
	21MA60R05
*/

int main() 
     {
	   int num;
	  printf("Enter marks of student to getting grade \n");
	   scanf("%d",&num);
	    if (num >= 90)
	        printf("Grade of student is EX\n");
	    else if(num >= 80 && num<=89)
	        printf("Grade of student is A\n");
	    else if(num >= 70 && num <= 79)  
	        printf("Grade of student is  B\n");
	    else if(num >= 60 && num <= 69)   
	        printf("Grade of student is  c\n");
	    else if(num >= 50 && num <= 59) 
	        printf("Grade of student is  D\n");
	    else if(num >= 35 && num <= 49)
	        printf("Grade of student is  P\n");
	    else
	        printf("Grade of student is =F\n");
	    return 0;
     }
