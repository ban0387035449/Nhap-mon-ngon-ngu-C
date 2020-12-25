#include <stdio.h>

int main(){
	int a,b, n;
  
	printf("Nhap so n:");
  	scanf("%d",&n);
  
	printf("n = %d\n",n);
  
	for (a = 1; a <=  n; a++){
    printf(" \n");
  for (b = 1 ; b <= a ; b++)
		printf (" %d " ,b );
 }
}
