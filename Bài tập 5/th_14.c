
#include <stdio.h>


int main(void) {
  int n;
  printf("nhap n = ");
  scanf("%d", &n);
  int S = 0;
  for(int i = 1; i <= n;i++){
    S+=i*i;
  }
printf("S = 1^2 + 2^2+...+%d^2 = %d", n, S);
    return 0;
}
