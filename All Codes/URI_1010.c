#include <stdio.h>

int main()
{
    int b,d;
    float g,h,e;

    //%*d will ignore int
    scanf("%*d %d %f",&b, &g);
    scanf("%*d %d %f",&d, &h);

    e=(b*g)+(d*h);
    printf("VALOR A PAGAR: R$ %.2f\n",e);

    return 0;
}
