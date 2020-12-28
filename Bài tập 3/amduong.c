#include <stdio.h>

int main() {
  int a ;//khai bao bien a
  printf ("nhap so a =");//hien thi nguyen a
  scanf ("%d",&a);//nhap so nguyen a
  if (a > 0){ //truong hop a>0 thi
  printf (" %d duong", a);//hien thi a duong
  }else if (a == 0){// truong hop a =0 
  printf("%d = 0", a);// hien thi a = 0
  }else { //cac truong hop con lai
    printf ("%d,am", a); //hien thi a am
  }
  getchar();
  return 0;
}
