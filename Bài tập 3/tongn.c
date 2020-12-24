#include <stdio.h>
int main(){
	int s, n, sum = 0;
  
	printf("Nhap so n:");
  	scanf("%d",&n);
  
	printf("n = %d\n",n);
  
	for (s=1; s <= n; s++){
		sum += s;
	}
  if (n == 1 ){
   printf("S = %d ",n);
  }
   else if (n == 2 ){
   printf("S =1 + %d=%d ",n,sum);
  }
  else if (n == 3 ){
   printf("S =1 + 2 + %d=%d ",n,sum);
  }
  else if (n == 4 ){
   printf("S =1 + 2 + 3 + %d=%d ",n,sum);
  }
	else 
    printf (" s = 1+ 2 ..+%d = %d  ",n,sum);
}
