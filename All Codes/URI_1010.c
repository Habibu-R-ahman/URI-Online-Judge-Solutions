#include<stdio.h>
int main()
{
    int a,b,c,d;
    float g,h,e;
    scanf("%d %d %f",&a,&b,&g);
    scanf("%d %d %f",&c,&d,&h);
    e=(b*g)+(d*h);
    printf("VALOR A PAGAR: R$ %.2f\n",e);
}
