#include <stdio.h>

int main() {

    int total, a, b;
    char ch;

    scanf("%d", &total);
    scanf("%d %c %d", &a, &ch, &b);

    if (ch == '+') {
        printf(((a + b) <= total) ? "OK" : "OVERFLOW");
    } else {
        printf(((a * b) <= total) ? "OK" : "OVERFLOW");
    }
    printf("\n");
    return 0;
}