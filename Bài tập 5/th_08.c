
#include <stdio.h>

int main(void) {
 
  float n, S = 0;
  printf("nhap n=");
  scanf("%f", &n);

for(float i = 1; i <= n; i++){
  S+=1/i;
}
  printf("s = %.2f ", S);
    return 0;
}
