#include<stdio.h>
int main()
{
    int N,i,j;
    scanf("%d",&N);
    float a[N*3], b[N*3];
    for(i=0;i<N*3;i++)
        scanf("%f",&a[i]);
    for(j=0;j<N*3;j=j+3)
    {
        b[j]=(a[j]*.2)+(a[j+1]*.3)+(a[j+2]*.5);
        printf("%.1f\n",b[j]);
    }
    return 0;
}

