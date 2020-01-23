#include<stdio.h>
int main()
{
    char a[10];
    float s, e, TOTAL;
    scanf("%s",a);
    scanf("%f %f",&s,&e);
    TOTAL = (s+(e*15/100));
    printf("TOTAL = R$ %0.2f\n",TOTAL);
    return 0;
}
