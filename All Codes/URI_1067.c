#include <stdio.h>

int main()
{
    int X,Y;
    scanf("%d",&X);
    if (X>=1 && X<=1000)
    {
    for (Y=1;Y<=X;Y++)
        {
            if(Y%2!=0)
            {
            printf("%d\n",Y);
            }
        }
    return 0;
    }
}
