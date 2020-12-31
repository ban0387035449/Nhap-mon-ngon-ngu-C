#include <stdio.h>

int main() {
   int i;

   printf("In cac so le tu 1 den 20:\n");
   for(i = 1; i <= 4; i++) {
      if(i%2 != 0)
         printf("%d\n", i);
   }

    for(i = 6; i <= 10; i++) {
     if(i%2 != 0)
         printf("%d\n", i);
   }
   for(i = 12; i <= 14; i++) {
      if(i%2 != 0)
         printf("%d\n", i);
   }
   for(i = 16; i <= 20; i++) {
      if(i%2 != 0)
         printf("%d\n", i);
   }
     return 0;
}
