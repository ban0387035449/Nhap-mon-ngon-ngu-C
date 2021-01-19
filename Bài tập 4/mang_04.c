#include <stdio.h>

int main(void) {
  int n,tong=0;
  //nhap so phan tu cua mang a
  printf("nhap n= ");
  scanf("%d",&n);
  //khai bao mang a
  int a[n];
  //vong lap cua mang a chay tu 0 den n-1
  for(int i=0;i < n ;i++){
    printf("nhap phan tu thu %d: ",i+1);
        scanf("%d", &a[i]);
  }
    printf("mang a: ");
  for(int i=0; i < n; i++){
    //hien thi cac phan tu cua mang a
      printf(" %d",a[i]);
      //tinh tong cua cac phan tu trong mang
      tong+=a[i];
      
      }
  
  printf("\n tong cac phan tu cua mang %d",tong);
}
