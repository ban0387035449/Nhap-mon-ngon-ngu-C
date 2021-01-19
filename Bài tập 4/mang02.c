#include <stdio.h>
  
int main() {    
    int i,n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        printf("nhap phan tu so %d ", i+1);
        scanf("%d", &a[i]);
    }
    
    printf(" mang a : \t");
    for (i = 0; i < n; i++) {
      // in cac phan tu cua mang a
        printf("%d ", a[i]);
    }
      printf ("\n so chan =");
     for (i = 0; i < n; i++){
       if(a[i]%2==0)
        //hien thi cac so chan
        printf("\t   %d",a[i]);
     }
     
    return 0;
}
