#include<stdio.h>
int main ()
{
    int R;
    double total, Pi= 3.14159;
    scanf("%d",&R);
    total= (4/3.0*Pi*R*R*R);
    printf("VOLUME = %.3lf\n", total);
    return 0;

    }
