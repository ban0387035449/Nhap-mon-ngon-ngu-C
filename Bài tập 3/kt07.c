#include <stdio.h>

int main() {
float a, b, c;
printf("Nhap canh thu nhat: ");
  scanf("%f", &a);

 printf("Nhap canh thu hai: ");
 scanf("%f", &b);

 printf("Nhap canh thu ba: ");
 scanf("%f", &c);

 if((a+b>c) && (a+c>b) && (c+b >a)) {
   
printf("\nDay la ba canh cua tam giac");
} else
printf("\nDay khong phai la ba canh cua tam giac");
}
