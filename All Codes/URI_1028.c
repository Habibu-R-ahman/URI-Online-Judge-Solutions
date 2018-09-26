#include <stdio.h>
int main()
{
    int a,b,n,i;
    scanf("%d",&n);
    int k[n*2];
    for(i=0; i<n; i++){
        scanf("%d %d",&a,&b);
    while(a!=b)
    {
        if(a>b)
            a-=b;
        else
            b-=a;
    }
    k[i]=a;
    }
    for(i=0; i<n; i++){
        printf("%d\n",k[i]);
    }
    return 0;
}
