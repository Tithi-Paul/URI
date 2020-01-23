#include <stdio.h>
int main()
{
float a,b,c;
scanf("%f %f %f",&a, &b, &c);
if(a>b+c)
{
printf("NAO FORMA TRIANGULO\n");

}
else if((a*a)==(b*b)-(c*c))
{

printf("TRIANGULO RETANGULO\n");

}
else if(a==b && b==c && a==c)
{

printf("TRIANGULO EQUILATERO\n");

}
else if((a*a)>(b*b)+(c*c))
{

printf("TRIANGULO OBTUSANGULO\n");

}
else if((a*a)<(b*b)+(c*c))
    {
if((a==b && b!=c) || (b==c && c!=a) || (a==c && c!=b) )
        {
    printf("TRIANGULO ACUTANGULO\n");
    printf("TRIANGULO ISOSCELES\n");

         }
    }
    return 0;
}
