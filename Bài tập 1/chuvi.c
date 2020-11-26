#include <stdio.h>
int main()
	{
  double r,cv,dt;
  const double pi = 3.14;
  r = 2.5;
  cv =2*r*pi;
  dt =r*r*pi;
  printf("cv \t dt \n %0.001f \t %0.001f",cv,dt);
  return 0;
  }
