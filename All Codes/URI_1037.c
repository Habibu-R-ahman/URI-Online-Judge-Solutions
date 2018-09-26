#include<stdio.h>
int main()
{
    double a;
    scanf("%lf",&a);
    if (a>=0 && a<=100)
    {
        if(a<=25)
        {
            printf("Intervalo [0,25]\n");
        }
        else if(a>25 && a<=50)
        {
            printf("Intervalo (25,50]\n");
        }
        else if(a>50 && a<=75)
        {
            printf("Intervalo (50,75]\n");
        }
        else
        {
            printf("Intervalo (75,100]\n");
        }
    }
    else
    {
        printf("Fora de intervalo\n");
    }
    return 0;
}
