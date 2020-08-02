#include <stdio.h>
#include <string.h>

int main()
{
    char title[20] = "nota(s) de R$";
    char title2[] = "moeda(s) de R$";
    int temp, n, i;
    int arr[12] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};
    double N;
    
    scanf("%lf", &N);
    n = (int)(N * 100 + 0.00001);
    printf("NOTAS:\n");

    for (i = 0; i < 12; i++) {
        temp = n / arr[i];
        n = n % arr[i];
        if (i == 6) {
            strcpy(title,title2);
            printf("MOEDAS:\n");
        }
        printf("%d %s %.2f\n", temp, title, arr[i]/100.00);
    }
    return 0;

}
