#include <stdio.h>
#include<math.h>
int main()
{
 float x, x1=1,x2=1;
    scanf("%f", &x);
    for (int i=1; i <= 4; i++)
        x2*=(x1 *= x*x);
    printf("x^21 за 6 операций =%f\n", x2*x);
}
