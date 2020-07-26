#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double b, c, d;
    // it will ignore string until space 
    cin.ignore(256,'\n'); 
    cin >> b >> c;
    d = (c * 15) / 100;
    cout << "TOTAL = R$ " << fixed << setprecision(2) << b + d << "\n";
    
	return 0;
}