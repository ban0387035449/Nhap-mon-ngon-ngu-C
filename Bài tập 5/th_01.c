
#include<stdio.h>
#include <math.h>
int main(){
  int a,b,c;
  float x1,x2, delta;
  printf("nhap a:");
  scanf("%d",&a);
printf("nhap b:");
  scanf("%d",&b);
  printf("nhap c:");
  scanf("%d",&c);
  delta =b*b-4*a*c;
  if (delta<0)
  printf("phuong trinh vo nghiem");
  if (delta==0){
 x1=x2=-b/(2*a);
 printf ("nghiem kep x1= x2= %.1f",x1);
  }
  if(delta>0){
    x1=(-b+ sqrt(delta))/(2*a);
    x2=(-b- sqrt(delta))/(2*a);
printf ("2 nghiem phan biet x1= %.1f x2=%.1f ",x1,x2);
  }
}
