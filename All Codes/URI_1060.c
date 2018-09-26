#include <stdio.h>
int main()
{
    float a[6];
    int i,b=0;
    for (i=0; i<6; i++)
    {
        scanf("%f",&a[i]);
	if(a[i] >= 0)
	b++;
    }
    
    printf("%d valores positivos\n",b);
    return 0;
}
