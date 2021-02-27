
#include <stdio.h>

int main(void) {
  int n;
  printf("nhap n =");
  scanf("%d", &n);
  if ( n <= 1){
    //so nguyen to la so tu nhien lon hon 1
    printf("n khong la so nguyen to");
    
    return 0;
    }
  int dem = 0;
  for(int i = 2; i < n ; i++){ //chay vong lap
    if(n % i == 0){    // n chia het cho i "khong du"
      dem++;
     }
    }
    if(dem == 0){  //tu 2 den n-1 khong co so nao n chia het
      printf("\n%d la so nguyen to", n);
    }else
    printf("\n %d khong la so nguyen to", n);   
return 0;
}
