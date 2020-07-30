#include <stdio.h>

int main() {

    int t, h, d, g;

    scanf("%d", &t);
    while (t--)
    {
        // cin >> h >>  d >> g;
        scanf("%d %d %d", &h, &d, &g);

        if (h <= 300 && h >= 200 && d >= 50 && g >= 150)
        {
            printf("Sim\n");
        }
        else
        {
            printf("Nao\n");
        }
    }

    return 0;
}