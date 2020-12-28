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
 sửa
 #include <stdio.h>
int main(){
  //di?m van :v
  //di?m toán:t
  //di?m trung bình: dtb
  float v,t,dtb;
printf ("diem toán t=");
scanf("%f",&t);
printf ("diem van v=");
scanf("%f",&v);
dtb=(v+t)/2;
printf("diem van \t diem toán \t diem trung bình \n ");
printf ("%g \t %g \t %g",t,v,dtb);
return 0;
}
sua lan cuoi
#include <stdio.h>
int main(){
  //điểm văn :v
  //điểm toán:t
  //điểm trung bình: đtb
  double v,t,dtb;
  //dtb=(float)(v+t)/2;
printf ("diểm toán t=");
scanf("%lf",&t);
printf ("điểm văn v=");
scanf("%lf",&v);
dtb=(v+t)/2;
printf("điểm văn \t điểm toán \t diểm trung bình \n      %.f \t    %.f \t      %.lf",t,v,dtb);
return 0;
}
