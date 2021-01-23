
#include <stdio.h>
int main(){
  //khai báo các biến
	int s, n, sum = 0;
  //in  nap so n và yêu cầu người dùng nhập số
	printf("Nhap so n:");
  	scanf("%d",&n);
  //in n= và số vừa được nhập ở trên
	printf("n = %d\n",n);
  //chạy vòng lặp for từ  1 đến n
	for (s=1; s <= n; s++){
    //tổng hiện tại ="0",sau mỗi vòng lặp cộng giá trị ="s"
		sum += s;
	}
  //in tong
  printf("%d",sum);
}
