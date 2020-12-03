#include <stdio.h>
int main(){
  //điểm văn :v
  //điểm toán:t
  //điểm trung bình: đtb
  double v,t,dtb;
  dtb=(v+t)/2;
printf ("diểm toán t=");
scanf("%lf",&t);
printf ("điểm văn v=");
scanf("%lf",&v);
printf("điểm văn \t điểm toán \t diểm trung bình \n %.lf \t %.lf \t %.lf",t,v,dtb);
return 0;
}
