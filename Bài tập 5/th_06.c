//Khoi khai bao
#include<stdio.h>
void mang_a(int a,int b,int c);

 //khoi ham main
int main(){
  int a,b,c;
  printf("Nhap a = ");
  scanf("%d", &a);
  printf("Nhap b = ");
  scanf("%d", &b);
  printf("Nhap c = ");
  scanf("%d", &c);
  printf("so be nhat = ");
mang_a(a,b,c);
  return 0;
}

// khoi dinh nghia ham
void mang_a(int a,int b,int c){
  if(a<b &&a<c)
   printf("%d",a);
   
 if (b<a&& b<c)
 printf("%d",b);

 if (c<a&&c<b)
 printf("%d",c);

  
}
