#include<stdio.h>
int main()
{
    int N,y,m,d;
    scanf("%d",&N);
    y=N/365;
    m=(N%365)/30;
    d=((N%365)%30);
    printf("%d ano(s)\n",y);
    printf("%d mes(es)\n",m);
    printf("%d dia(s)\n",d);
    return 0;
}
