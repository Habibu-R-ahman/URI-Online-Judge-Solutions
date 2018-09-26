#include <stdio.h>
int main()
{
    int start_h, end_h, start_m, end_m, duration_h, duration_m;
    scanf("%d %d %d %d", &start_h, &start_m, &end_h, &end_m);
    
    duration_h = end_h - start_h;

    if (duration_h < 0)
    {
        duration_h = 24 + (end_h - start_h);
    }

 duration_m = end_m - start_m;
 if (duration_m < 0)

  {
    duration_m = 60 + (end_m - start_m);
    duration_h--;
  }

    if (start_h == end_h && start_m == end_m)

    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duration_h, duration_m);
    return 0;
}
