#include<stdio.h>
int main()
{
    int X,i,a;
    scanf("%d",&X);
    for(i=0; i<11; i++)
    {
        a:
        if(X%2!=0)
        {
            printf("%d\n",X);
            i++;
            X++;
        }
        else
        {
            X++;
            goto a;
        }

    }
    return 0;
}
