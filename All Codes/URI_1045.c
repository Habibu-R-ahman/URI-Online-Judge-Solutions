#include <stdio.h>
int main()
{
    double A,B,C;
    scanf("%lf %lf %lf",&A,&B,&C);

    if (A < B){					//Imagine 
        A = A + B;				//	A = 2 + 1
        B = A - B;				//  B = 3 - 1
        A = A - B;				//  A = 3 - 2
    }
    if (A < C){					//Swapping Value A to C		
        A = A + C;
        C = A - C;
        A = A - C;
    }
    if (B < C){					//Swapping Value B to C
        B = B + C;
        C = B - C;
        B = B - C;
    }
        if (A >= (B+C))
            printf("NAO FORMA TRIANGULO\n");
        else if ((A*A)==((B*B)+(C*C)))
            printf("TRIANGULO RETANGULO\n");
        else if ((A*A)>((B*B)+(C*C)))
            printf("TRIANGULO OBTUSANGULO\n");
        else if ((A*A)<((B*B)+(C*C)))
            printf("TRIANGULO ACUTANGULO\n");
        if (A==B && B==C)
            printf("TRIANGULO EQUILATERO\n");
        else if (A==B || A==C || B==C)
            printf("TRIANGULO ISOSCELES\n");
    
    return 0;
}
