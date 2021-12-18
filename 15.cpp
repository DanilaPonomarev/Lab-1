#include <stdio.h>
#include <conio.h>
int main()
{
  double d = 3.2, x; 
  int i = 2, y;
	x = (y = d / i) * 2; 
	printf("x = %f ;y = %d\n", x, y);
	x = (y = d / i) * 2; 
	printf("x = %d ;y = %f\n", x, y);
	y = (x = d / i) * 2; 
	printf("x = %f ;y = %d\n", x, y);
	y = d * (x = 2.5 / d); 
	printf("x = %f; y = %d\n", x, y);
	x = d * (y = ((int)2.9 + 1.1) / d); 
	printf("x = %d y = %f\n", x, y);
}
