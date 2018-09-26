#include <stdio.h>
int main()
{
    float a,b;
    int c;
    scanf("%f",&a);
    if (a>=0 && a<=400.00)
    {
        b = a * .15;
        c = 15;
    }
    else if (a>=400.01 && a<=800.00)
    {
        b = a * .12;
        c = 12;
    }
    else if (a>=800.01 && a<=1200.00)
    {
        b = a * .10;
        c = 10;
    }
    else if (a>=1200.01 && a<=2000.00)
    {
        b = a * .07;
        c = 7;
    }
    else if(a>2000)
    {
        b = a * .04;
        c = 4;
    }
    
    printf("Novo salario: %.2f\n",b+a);
    printf("Reajuste ganho: %.2f\n",b);
    printf("Em percentual: %d %%\n",c);

    return 0;
}
