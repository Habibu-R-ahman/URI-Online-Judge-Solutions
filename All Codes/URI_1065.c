#include <stdio.h>
int main()
{
    int a,i,b=0;
    for (i=0; i<5; i++)
    {
        scanf("%d",&a);
        if (a%2==0)
            b++;
    }
    printf("%d valores pares\n",b);
    return 0;
}

