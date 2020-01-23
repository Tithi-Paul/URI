#include<stdio.h>
int main()
{
     double A, B, C, Pi=3.14159;
     scanf("%lf %lf %lf", &A, &B, &C);

     printf("TRIANGULO: %0.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", .5*A*C, Pi*C*C,((A+B)/2)*C, B*B, A*B);

     return 0;
     }
