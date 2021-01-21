#include <stdio.h>

int main(void) {
  int i, n,m,trung_gian=0;
    printf("nhap n =");
    scanf("%d",&n);
 int a[n];
 for( i=0;i<n;i++){
    printf("nhap phan tu thu %d =",i+1);
    scanf("%d",&a[i]);
 }
    printf("cac phan tu cua mang a :");
 for(int i=0;i<n;i++){
    printf("%d ",a[i]);
 }
   
	printf("\n Nhap so m can kiem tra: ");scanf("%d",&m);
 
	for (i=0; i<n; i++){
		if (a[i]==m){
			trung_gian+=1;
			break;
		}	
	}
	
	if (trung_gian > 0){
		printf("Co ton tai");
	}
	else{
		printf("Khong ton tai");
	}
	
}
