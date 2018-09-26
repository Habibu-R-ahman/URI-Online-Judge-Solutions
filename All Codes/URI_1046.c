#include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    if (a>=b){
        c=24-a;
        printf("O JOGO DUROU %d HORA(S)\n",c+b);
        }
    else if (b>a){
        c=24-a;
        d=c+b;
        printf("O JOGO DUROU %d HORA(S)\n",d-24);
        }
    return 0;
}
