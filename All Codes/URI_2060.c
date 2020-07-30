#include <stdio.h>

int main() {

    int t;
    scanf("%d", &t);
    int _2=0,_3=0,_4=0,_5=0;

    while(t--) {
        int x;
        scanf("%d", &x);
        if(x%2==0) _2++;
        if(x%3==0) _3++;
        if(x%4==0) _4++;
        if(x%5==0) _5++;
    }
    printf("%d Multiplo(s) de 2\n", _2);
    printf("%d Multiplo(s) de 3\n", _3);
    printf("%d Multiplo(s) de 4\n", _4);
    printf("%d Multiplo(s) de 5\n", _5);
 
    return 0;
}