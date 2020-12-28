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

  }
  else{
  thanh_tien = don_gia*so_luong*75/100;
  printf("thanh tien \n");
  printf ("%d",thanh_tien );


  }
  getchar ();
  return 0;
}
 





Bài tập 1 ngày 17/12/2020:
- Thay đổi nội dung tập tin hoadon.c trong Bài tập 3 Github
- Thành tiền được giảm 50% nếu số lượng >=5 và đơn giá >=500

#include <stdio.h>

int main() 
{
  float don_gia,so_luong,thanh_tien ;
    // nhập giá tiền và số lượng
    printf ("don gia  =");
    scanf("%f",&don_gia);
    printf ("so luong = ");
    scanf ("%f",&so_luong);
  
  // số lượng từ 5 đơn trở lên và đơn giá từ 500 sẽ được giảm giá 50%
  if (so_luong>=5&&don_gia>=500){
    thanh_tien = don_gia*so_luong*0.5;
    printf("thanh tien \n");
    printf ("%.f",thanh_tien );
   
  }//các trường hợp còn lại tính tiền bình thường
  else {
    thanh_tien = don_gia * so_luong;
    printf("thanh_tien \n");
    printf("%.f",thanh_tien);
    }
  
  getchar ();
  return 0;
}
