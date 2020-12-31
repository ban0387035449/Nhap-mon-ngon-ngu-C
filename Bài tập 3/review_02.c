#include <stdio.h>

int main(){
	int a,b,n;

	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b: ");
	scanf("%d",&b);
  
	for (n=a;n<=b;n++){
	switch (n){
    case 1: //nhap n=1
       printf("one\t");
	   break;
	case 2: //nhap n=2
	   printf("two\t");
	   break;
	case 3: //nhap n=3
	   printf("three\t");
	   break;
    case 4: //nnhap n=4
	   printf("four\t");
	   break;
	case 5: //nhap n=5
	   printf("five\t");
	   break;
	case 6: //nhap n=6
	   printf("six\t");
	   break;
	case 7: //nhap n=7
	   printf("sevent\t");
	   break;
	case 8: //nhap n=8
	   printf("eight\t");
	   break;
	case 9: //nhap n=9
	   printf("nine\t");
	   break;
    default: //neu n>9
    if (n%2==0){ //n la so chan
	   printf("even\t");
	   }
	else{ //n la so le
	    printf("odd\t");
	}
	}
	}

	
	return 0;
}
