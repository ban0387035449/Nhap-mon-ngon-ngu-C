#include <stdio.h>

int main() {
	// khai báo bien a kieu so nguyen
	int a;
	//khoi tao gia tri bien a
	a = 5;
	// khai bao va khoi tao bien
	int b = 6;
	// khai bao nhieu bien va khoi tao
	int c = 7, d = 8;
	// khai bao nhieu bien 
	int e, f, g;
	printf("bien a = %d va bien b = %d",a,b);
	e = a + b;
	printf("\n");
	printf ("tong a + b = %d",e);
	printf ("\n");
	printf ("tong %d + %d = %d",a,b);
  // khai bao bien f
  f = (( a + b) - c) * d;
  printf ("\n");
  printf ("((a + b) - c ) * d=(( %d + %d )- %d ) * %d = %d ",a,b,c,d,f);
  getchar ();
	return 0;
}
