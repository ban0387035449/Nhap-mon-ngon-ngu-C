#include<stdio.h>
main()
{int i,n,t,a,tc;
t=0;
printf("Nhap vao gia tri n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{a=i%2;
if(a!=0)t=t+i;}
printf("tong so le = %d",t);
 if (i%2 != 0)          //i chia cho 2 khong du thi i la so chan
        i++;            //vong lap i 
    for(int i = 2; i <= n; i+=2){      //i+=2 moi lan tang len 2 don vi
       tc += i;
    }
    printf("\n tong so chan = %d\n",tc);
getchar();
}
