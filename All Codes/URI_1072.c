#include<stdio.h>
int main()
{
    int a,i,j=0;
    long int x;
    scanf("%d",&a);
    for(i=0; i<a; i++){
        scanf("%d",&x);
        if(x > 9 && x < 21){
            j++;
        }
    }
    printf("%d in\n%d out\n",j,a-j);
    return 0;
}
