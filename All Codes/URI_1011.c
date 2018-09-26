#include<stdio.h>
#define PI 3.14159
int main()
{
    int R;
    double V;
    scanf("%d",&R);
    V=(4.0/3)*PI*R*R*R;
    printf("VOLUME = %.3f\n",V);
    return 0;
}
