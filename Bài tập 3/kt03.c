
#include <stdio.h>

int main() {
   int i;

   printf("In cac so le tu 1 den 20:\n");
  //if ( i%2 != 0 ){
    for(i = 1; i <= 20; i++) {
    if ( i%2 != 0 ){
     if( i==5 || i==11||i==15)
      continue;
         printf("%d\n", i);
    
    } }
     return 0;
}
#include <stdio.h>

int main() {
   int i;

   printf("In cac so le tu 1 den 20:\n");
    i=1;
    while (i < 20){
       i++;
    if ( i%2){
     switch(i){
       case 5:
       case 11:
       case 15:
       break;
     default:
         printf("%d\n",i);
     }
    }
    } 
     return 0;
}
