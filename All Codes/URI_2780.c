#include <stdio.h>

int main() {

    int a, point = 0;
    scanf("%d", &a);

    if (a < 801) {
        point = 1;
    } else if (a < 1401) {
        point = 2;
    } else if (a < 2001) {
        point = 3;
    }
    printf("%d\n", point);
    
    return 0;
}