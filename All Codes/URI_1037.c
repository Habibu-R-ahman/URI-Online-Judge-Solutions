#include <stdio.h>

int main()
{
    float n;
    scanf("%f", &n);
    
    if (n < 0 || n > 100)
        printf("Fora de intervalo\n");
    else if (n <= 25){
        printf("Intervalo [0,25]\n");
    }
    else if (n <= 50){
        printf("Intervalo (25,50]\n");
    }
    else if (n <= 75){
        printf("Intervalo (50,75]\n");
    }
    else if (n <= 100){
        printf("Intervalo (75,100]\n");
    }
    return 0;
}