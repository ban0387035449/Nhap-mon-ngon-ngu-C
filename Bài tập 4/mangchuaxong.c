#include <stdio.h>
  
int main() {    
    int i,tc=0, number;
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
    if (i%2 != 0)          //i chia cho 2 khong du thi i la so chan
        i++;            //vong lap i 
    for(int i = 2; i <= number; i+=2){//i+=2 moi lan tang len 2 don vi
      tc += arr[i];
    }
     printf("\n tong so chan = %d\n",tc);
    return 0;
}
