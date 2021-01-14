#include <stdio.h>
 
int main()
{
    //khai báo và khởi tạo mảng
    int a[4] = { 3, 5, 7, 2};
    int b,s=0;
    //vòng lặp
    for(int b=0; b<4; b++)
    {
        //in các phần tử trong mảng
        printf("%d\t", a[b]);
        s+=a[b];
    }
        printf("\ntổng =%d ",s);
    return 0;
}
 
