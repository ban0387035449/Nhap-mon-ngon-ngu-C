#include <stdio.h>

int main(void) {
  int n,so_chan=0,so_le=0,so_0=0;
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
        so_chan+=1;
        }
  }
        printf("\nso le tu mang a: ");
        //vong lap tinh so le cua mang a
  for(int i=0;i<n;i++){
        if(a[i] % 2!=0){
        printf("%d ",a[i]);
        so_le+=1;
    }
    } 
    //vong lap tinh so luong so 0   
  for(int i=0;i<n;i++){
        if(a[i] ==0){
        so_0+=1;
    }
  }
  printf("\nso chan :%d \nso le : %d \nso 0:%d",so_chan,so_le,so_0);
  
  return 0;
}
