#include<stdio.h>
int main(){
  int a = 3;
 int s=0;
 float sc=0;
  int b[3]={1,2,3};               //mảng b kiểu int gồm 3 số 1,2,3
  float c[2]={2.3,3.2};           // mảng c kiểu float gồm 2 só 2.3 và 3.2
  for (int i = 0 ; i < 3 ; i++){  //vòng lặp của b chạy từ 0 den 2.
 
  printf("\t%d",b[i]);            //hiển thị các phần tử của mảng b
   s+=b[i];                       //tỉnh tổng các số trong b bằng cách cộng từng số trong mảng
  }
 printf("\ntong b =%d",s);        // hiển thị tổng các số trong b

  for (int i = 0 ; i < 2 ; i++){
 //float s=0;
  printf("\n\t%.1f",c[i]);        //hiển thị các phần tử của mảng c  
sc+=c[i];                          //tỉnh tổng các số trong c bằng cách cộng từng số trong mảng
  }   
  printf("\n tong c= %.1f",sc);   // hiển thị tổng các số trong c

}
