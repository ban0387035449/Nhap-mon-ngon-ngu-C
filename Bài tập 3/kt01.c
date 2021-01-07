#include <stdio.h>
int main(){
    int a,b;
    printf ("bang cuu chuong ");
   
    for(int a = 2; a < 10;a++){
        printf("\n cuu chuong %d \n", a);
        for(int b = 1; b <= 10; b++){
            printf("\t%d x %d = %d\n", a, b, a*b);
        }
    }
}
#include <stdio.h>
int main(){
int a=1,b=2,c=3,d=4;
printf("cuu chuong 2\n");
printf("2*1=%d \n2*2=%d \n2*3=%d\n",b,b*b,b*c);
printf("cuu chuong 3\n");
printf("3*1=%d \n3*2=%d \n3*3=%d\n",c,c*b,c*c);
printf("cuu chuong 4\n");
printf("4*1=%d \n4*3=%d \n4*3=%d",d,d*b,d*c);
}
