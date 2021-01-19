#include <stdio.h>
  
int main() {    
    int i,c=0, number;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &number);
    int arr[number];
    printf("Nhap cac phan tu cua mang: \n");
    for (i = 0; i < number; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    // in cac phan tu cua mang arr
    printf("Cac phan tu cua mang: \n");
    for (i = 0; i < number; i++) {
        printf("%d ", arr[i]);
    }

    
    
       printf ("\n so chan =");
     for (i = 0; i < number; i++){
       if(arr[i]%2==0){
        printf("\n  %d\n",arr[i]);
       }
       
     }
    
    return 0;
}
