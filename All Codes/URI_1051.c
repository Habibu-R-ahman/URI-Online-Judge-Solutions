#include <stdio.h>
int main()
{
    double b,c;
    scanf("%lf",&b);
    if (b>=0 && b<=2000)
    {
        printf("Isento\n");
    }
    else if(b>=2000.01 && b<=3000)
    {
        c=(b-2000)*.08;
        printf("R$ %.2lf\n",c);
    }
    else if (b>3000 && b<4500)
    {
        c=((b-3000)*.18)+80;
        printf("R$ %.2lf\n",c);
    }
    else
    {
        c=((b-4500)*.28)+350;
        printf("R$ %.2lf\n",c);
    }
    return 0;
}
