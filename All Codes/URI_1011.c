#include<stdio.h>
#define PI 3.14159

int main()
{
    int R;
    double V;
    
    scanf("%d",&R);
    V = (4.0 * PI * R * R * R) / 3;

    printf("VOLUME = %.3f\n",V);
    
    return 0;
}
