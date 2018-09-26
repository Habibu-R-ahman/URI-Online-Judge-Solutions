#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d",&a);
    if(a>5 && a<2000)
    {
        for(i=1; i<=a; i++)
        {
            if(i%2==0)
            {
                b=i*i;
                printf("%d^2 = %d\n",i,b);
            }
        }
    }
    return 0;
}
