#include <stdio.h>



int main(void) {
  int n;
  printf("nhap so can kiem tra  =");
  scanf("%d", &n);

int S = 0;
for(int i = 1; i < n; i++){
  if(n % i == 0)  //lay cac so chia khong du cong lai
  S+=i;
  }
  if(S == n){ 
    //tong cac so chia khong du = so cho luc dau thi la so hoan hao
  printf("%d la so hoan hao",n);
  }else
  printf(" %d khong la so hoan hao", n);
        
    return 0;
}
