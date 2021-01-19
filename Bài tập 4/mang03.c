#include <stdio.h>

int main(void) {
  int n,sc=0,sl=0,khong=0;
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
      }
  printf("\nso chan tu mang a: ");
        //vong lap tinh so chan cua mang a
  for(int i=0;i<n;i++){
        if(a[i] % 2==0 &&a[i]>0){

        printf("%d ",a[i]);
        sc+=1;
        }
  }
        printf("\nso le tu mang a: ");
        //vong lap tinh so le cua mang a
  for(int i=0;i<n;i++){
        if(a[i] % 2!=0){
        printf("%d ",a[i]);
        sl+=1;
    }
    } 
    //vong lap tinh so luong so 0   
  for(int i=0;i<n;i++){
        if(a[i] ==0){
        khong+=1;
    }
  }
  printf("\nso chan trong mang a:%d ",sc);
  printf("\nso le trong mang a:%d ",sl);
  printf("\nso luong 0: %d ",khong);
  return 0;
}
