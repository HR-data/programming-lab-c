#include <stdio.h>
int main() {
   int k = 0, count = 0, count1 = 0;
  
  
   for (int i = 1; i <=5; ++i) 
   {
      for (int j = 1; j <=5 - i; ++j) 
      {
         printf("  ");
         ++count;
    }
      while (k != 2 * i -1) 
      {
         if (count <= 5 - 1) {
            printf("%d ", i + k);
            ++count;
         } else {
            ++count1;
            printf("%d ", (i + k - 2 * count1));
         }
         ++k;
      }
      count1 = count = k = 0;
      printf("\n");
   }
   return 0;
}
