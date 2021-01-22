#include <stdio.h>
int sum(int a,int b,int c);

int main() {
  int a=1,b=2,c=3;
  printf("tong=%d\n",sum(a,b,c));
  return 0;
}
int sum(int a,int b,int c){
  int sum=a+b+c;
return sum;
}


//void

#include <stdio.h>
void sum(int a,int b,int c);

int main() {
  int a=1,b=2,c=3;
  //printf("tong=%d\n",sum(a,b,c));
  sum(a,b,c);

  return 0;
}
void sum(int a,int b,int c){
 int  sum=a+b+c;
  printf("%d",sum);
}
