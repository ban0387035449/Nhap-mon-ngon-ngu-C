#include <stdio.h>
int main(){
  int a = 5, b = 3;
  char pt;
  printf ("vui long nhap phep tinh");
  // nhập phép tính cộng hoặc trừ
  scanf ("%c",&pt);
  switch(pt) {
 case '+': //trường hợp dùng dấu " + " máy sẽ thực hiện phép tính a+ b
     printf (" a + b = %d",a +b);
      break;
 case '-': //trường hợp dùng dấu " - " máy sẽ thực hiện phép tính a -b
     printf (" a - b = %d",a -b);
      break;
 default: // các trường hợp còn lại hiển thị yêu cầu nhập lại phép tính
      printf("vui lòng nhập cộng hoặc trừ");
    }
  getchar();
  return 0;
}
