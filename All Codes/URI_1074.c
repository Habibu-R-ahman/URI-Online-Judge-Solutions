#include<stdio.h>
int main()
{
    int i,j,k[10000];
    scanf("%d",&j);
    for(i=0; i<j; i++)
    {
        scanf("%d",&k[i]);
    }
    for(i=0; i<j; i++)
    {
        if(k[i]==0)
        printf("NULL\n");
    else if(k[i]%2==0)
        {
            if(k[i]>0)
                printf("EVEN POSITIVE\n");
            else
                printf("EVEN NEGATIVE\n");
        }
    else if(k[i]%2!=0)
        {
            if(k[i]>0)
                printf("ODD POSITIVE\n");
            else
                printf("ODD NEGATIVE\n");
        }
    }
    return 0;
}
