#include <stdio.h>

int main(void) {
  int n,tong=0;
  //nhap so phan tu cua mang a
  printf("nhap n= ");
  scanf("%d",&n);

  int a[n];

  for(int i=0;i < n ;i++){
    printf("nhap phan tu thu %d: ",i+1);
        scanf("%d", &a[i]);
  }
    printf("mang a: ");
  for(int i=0; i < n; i++){
      printf(" %d",a[i]);
      tong+=a[i];
      
      }
  
  printf("\n tong cac phan tu cua mang %d",tong);
}
