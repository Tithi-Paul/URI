#include<stdio.h>
int main()
{
    int n;
    float s, e, TOTAL;
    scanf("%d",&n);
    scanf("%f %f",&s, &e);
    TOTAL = (s+(e*15/100));
    printf("TOTAL = %0.2f\n", TOTAL);
    return 0;
}
