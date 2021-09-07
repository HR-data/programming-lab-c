#include <stdio.h>
int main() {
   int  cf = 1;
  
   for (int i = 0; i <= 5; i++) 
   {
      for (int k = 1; k <=5 - i; k++)
         printf("  ");
      for (int j = 0; j <= i; j++) 
      {
         if (j == 0 || i == 0)
            cf = 1;
         else
            cf = cf * (i - j + 1) / j;
         printf("%4d", cf);
      }
      printf("\n");
   }
   return 0;
}
