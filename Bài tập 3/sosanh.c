#include <stdio.h>

int main() {
  int a,b ;
  printf ("nhap so a =");
  scanf("%d",&a);
  printf ("nhap so b = ");
  scanf ("%d",&b);
  if (a > b){
  printf ("%d a > b", a);
  }else if (a == b){
  printf("%d a = b", a);
  }else {
    printf ("%d,a <b", a);
  }
  getchar();
  return 0;
}
