#include<stdio.h>
int main()
{
    int pn1, pc1, pn2,pc2;
    float pp1, pp2, total;
    scanf("%d %d %f",&pn1,&pc1, &pp1);
    scanf("%d %d %f", &pn2,&pc2, &pp2);
    total=(pc1*pp1)+(pc2*pp2);
    printf("VALOR A PAGAR: R$ %2f\n", total);
    return 0;
    }
