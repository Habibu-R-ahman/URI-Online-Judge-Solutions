#include <stdio.h>

int main() {

    int t, k, n, temp;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d, %d", &k, &n);
        if (k > n) {
            temp = (k / n) + (k % n);
        } else if (k < n) {
            temp = k;
        } else {
            temp = 1;
        }
        printf("%d\n", temp);   
    }
    
    return 0;
}