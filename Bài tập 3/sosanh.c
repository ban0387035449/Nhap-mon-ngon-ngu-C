#include <stdio.h>

int main() {
 
  int a,b ;
  // nhập 2 số nguyên a b ngẫu nhiên.
  printf ("nhap so a =");
  scanf("%d",&a);
  printf ("nhap so b = ");
  scanf ("%d",&b);
  if (a > b){
  printf ("a > b");
  }else if (a == b){
  printf("a = b");
  }else {
    printf ("a <b");
  }
  getchar();
  return 0;
}
