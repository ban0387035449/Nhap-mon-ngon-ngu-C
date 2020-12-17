#include <stdio.h>
int main(){

  int thang;
  printf ("vui long nhap thang ");
  // nhập phép tính cộng hoặc trừ
  scanf ("%d", &thang);
  switch(thang) {
     case 2:
      printf (" 28 ngay");
      break;
   case 4 :
   case 6 :
   case 9 :
   case 11 :
     printf (" 30 ngay");
      break;
      default: // các trường hợp còn lại
       printf("30 ngay");
    
  }
 
  
  getchar();
  return 0;
}
