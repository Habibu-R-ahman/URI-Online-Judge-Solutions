#include <iostream>

using namespace std;

int main() {
	
    double A,B,C;
    cin >> A >> B >> C;

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
            cout << "NAO FORMA TRIANGULO" << endl;
        else if ((A*A)==((B*B)+(C*C)))
            cout << "TRIANGULO RETANGULO" << endl;
        else if ((A*A)>((B*B)+(C*C)))
            cout << "TRIANGULO OBTUSANGULO" << endl;
        else if ((A*A)<((B*B)+(C*C)))
            cout << "TRIANGULO ACUTANGULO" << endl;
        if (A==B && B==C)
            cout << "TRIANGULO EQUILATERO" << endl;
        else if (A==B || A==C || B==C)
            cout << "TRIANGULO ISOSCELES" << endl;
    
    return 0;
}
