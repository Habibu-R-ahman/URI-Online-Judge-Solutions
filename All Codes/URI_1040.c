#include <stdio.h>
int main()
{
    double N1, N2, N3, N4, N5, a,b;
    scanf ("%lf%lf%lf%lf", &N1,&N2,&N3,&N4);
    a=((N1*2)+(N2*3)+(N3*4)+N4)/10;
    printf ("Media: %.1lf\n",a);
    if(a>=7)
        printf ("Aluno aprovado.\n");
    else if(a<5)
        printf("Aluno reprovado.\n");
    else if(a>=5&&a<=6.9)
    {
        printf ("Aluno em exame.\n");
        scanf("%lf", &N5);
        printf ("Nota do exame: %.1lf\n",N5);
        b=(N5+a)/2;
        if(b>=5)
            printf ("Aluno aprovado.\n");
        else if(b<=4.9)
            printf ("Aluno reprovado.\n");
        printf ("Media final: %.1lf\n",b);
    }
    return 0;
}
