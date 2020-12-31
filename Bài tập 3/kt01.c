#include <stdio.h>
int main(){
    int a,b;
    printf ("bang cuu chuong ");
   
    for(int a = 1; a <= 10;a++){
        printf("\n cuu chuong %d \n", a);
        for(int b = 1; b <= 10; b++){
            printf("\t%d x %d = %d\n", a, b, a*b);
        }
    }
}
