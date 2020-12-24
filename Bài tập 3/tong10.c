#include <stdio.h>
 
int main(){
    int a = 1;
    int b = 10;
 
    int sum = 0; // cần khởi tạo giá trị
    
    for(int i = a; i <= b; i++){
        sum += i; // sum = sum + i
    }
    printf("Sum = %d", sum);
}
