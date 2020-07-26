#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int b, d;
    double g, h, e;

    cin.ignore(100, ' ');
    cin >> b >> g;
    cin.ignore(100, ' ');
    cin >> d >> h;
    e = (b * g) + (d * h);

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << e << "\n";
    
    return 0;
}