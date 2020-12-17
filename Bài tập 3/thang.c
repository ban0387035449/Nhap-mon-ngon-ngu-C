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
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
     printf ("31 ngay");
      break;
      default: // các trường hợp còn lại
       printf ( "vui long nhap tu 1 den 12");
    
  }
 
  
  getchar();
  return 0;
}
