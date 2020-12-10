#include <stdio.h>

int main() {
  int don_gia,so_luong,thanh_tien ;
  // nhập giá tiền và số lượng
  printf ("don gia  =");
  scanf("%d",&don_gia);
  printf ("so luong = ");
  scanf ("%d",&so_luong);
  
  if (so_luong <5){
  thanh_tien = don_gia * so_luong;
  printf("thanh_tien \n");
  printf("%d",thanh_tien);

  }if (so_luong>=5){
  thanh_tien = don_gia*so_luong*75/100;
  printf("thanh tien \n");
  printf ("%d",thanh_tien );


  }
  getchar ();
  return 0;
}
