#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
    float a,b;
    int c;
    cin >> a;
    
    if (a <= 400.00) {
        b = a * .15;
        c = 15;
    }
    else if (a <= 800.00) {
        b = a * .12;
        c = 12;
    }
    else if (a <= 1200.00) {
        b = a * .10;
        c = 10;
    }
    else if (a <= 2000.00) {
        b = a * .07;
        c = 7;
    }
    else {
        b = a * .04;
        c = 4;
    }
    
    cout << "Novo salario: " << fixed << setprecision(2) << b+a << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << b << endl;
    cout << "Em percentual: " << fixed << setprecision(2) << c << " %" << endl;

    return 0;
}

