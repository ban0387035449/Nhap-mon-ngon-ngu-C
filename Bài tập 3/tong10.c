#include <stdio.h>
 
int main(){
   
    int sum = 0; // cần khởi tạo giá trị
    
    for(int i = 1; i <= 10; i++){
        sum += i; // sum = sum + i
    }
    printf("Sum = %d", sum);
}
