#include<stdio.h>
int main()
{
    int c[12],n,f,i,num[] = {100,50,20,10,5,2,100,50,25,10,5,1};
    double x;
    scanf("%lf",&x);
    n = x;
    f = x*100;
    f = f%100;
    printf("NOTAS:\n");
    for(i=0;i<6;i++)
    {
        c[i] = n/num[i];
        n = n%num[i];
        printf("%d nota(s) de R$ %d.00\n", c[i], num[i]);
    }
    if(n == 1)
    f = f+100;
    printf("MOEDAS:\n");
    for(i = 6;i<12;i++)
    {
        c[i] = f/num[i];
        f = f%num[i];
        printf("%d moeda(s) de R$ %0.2f\n", c[i], num[i]/100.0);
    }
    return 0;

}
