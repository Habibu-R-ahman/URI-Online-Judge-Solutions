#include <stdio.h>

int main() {

    int m, a, b;
    int max, temp;

    scanf("%d %d %d", &m, &a, &b);

    max = (a + b + abs(a - b)) * 0.5;
    temp = m - (a + b);

    printf("%d\n", ((max >= temp) ? max : temp));
    
    return 0;
}