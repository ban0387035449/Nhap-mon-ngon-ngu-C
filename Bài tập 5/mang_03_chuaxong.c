//Khoi khai bao
#include<stdio.h>
int n,i;
void Nhap_pt_mang(int a[]);
void Hien_thi_pt_mang(int a[]);
void Hien_thi_tong_chan (int a[]);
void Dem_chan_le_0(int a[]);
 //khoi ham main
int main(){
  int n;
  printf("Nhap n = ");
  scanf("%d", &n);
  int a[n];
  Nhap_pt_mang(a);
  Hien_thi_pt_mang(a);
  Hien_thi_tong_chan(a);
  Dem_chan_le_0(a);
  return 0;
}
// khoi dinh nghia ham
void Nhap_pt_mang(int a[]){
for(int i=0;i < n ;i++){
     printf("nhap phan tu thu %d: ",i+1);
     scanf("%d", &a[i]);
  }
}
void Hien_thi_pt_mang(int a[]){
printf("cac phan tu cua mang a: ");
  for(int i=0; i < n; i++){
    //hien thi cac phan tu cua mang a
      printf(" %d",a[i]);
  }
}

  void Hien_thi_tong_chan(int a[]){
      int tong=0;
    for(int i=0; i < n; i++){
      //tinh tong cua cac phan tu trong mang
   tong+=a[i];
  
      
    }
      printf("\n tong cac phan tu cua mang %d",tong);
  }
void Dem_chan_le_0(int a[]){
  int so_chan=0,so_le=0,so_0;
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
  
}
