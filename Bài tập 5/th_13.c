#include <stdio.h>
int main(){
  //khai báo các biến
 float a,b,x;
  
	printf("Nhap so a:");
  	scanf("%f",&a);
  printf("Nhap so b:");
  	scanf("%f",&b);
 if( a!=0)
 x=-b/a;
 printf("pt co nghiem la %.2f",x);

 if (a==0 && b==0)
 printf(" pt vo nghiem");
 
 if (a==0 && b!=0)
 printf("pt vo so nghiem");

 
return 1 ;
}
