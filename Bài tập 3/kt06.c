cau a tam giac dac
#include <stdlib.h>

int main()
{
    int a; int b = 0;
    printf("Nhap chieu cao tam giac cua ban: \n");
    scanf("%d",&a);

    while (a > 0)
    {
        for (int i = 1; i<a; i++)
            printf("%c ", ' ');
        for (int k = 0; k <= b; k ++)
            printf("%c ", '*');
        for (int k = 0; k < b; k ++)
            printf("%c ", '*');
        a -- ;
        b ++ ;
        printf("\n");
    }
return 0;

}
  
  
cau b tam giac rong nam giua man hinh
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n; int q = 0;
    printf("Nhap chieu cao tam giac cua ban: \n");
    scanf("%d",&n);
    int a = n-2;

    for (int c = 1; c < n; c ++)
        printf("%c",' ');
    printf("%c",'*');
    printf("\n");

    while (a > 0)
    {
        for (int i = 0; i<a; i++)
            printf("%c", ' ');
        printf("%c", '*');
        for (int k = 0; k <= q; k ++)
            printf("%c", ' ');
        printf("%c", '*');
        a -- ;
        q += 2;
        printf("\n");
    }
        for (int b = 2*n-1; b > 0; b --)
            printf("%c",'*');


    return 0;
}
