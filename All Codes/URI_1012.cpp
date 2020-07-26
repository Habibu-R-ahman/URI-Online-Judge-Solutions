#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double a,b,c;
	
	cin >> a >> b >> c;
	
	cout <<"TRIANGULO: "<< fixed << setprecision(3) << (a * c) / 2 << endl;
	cout <<"CIRCULO: "  << c * c * 3.14159 << endl;
	cout <<"TRAPEZIO: " << ((a + b) / 2) * c << endl;
	cout <<"QUADRADO: " << b * b << endl;
	cout <<"RETANGULO: "<< a * b << endl;

	return 0;
}
