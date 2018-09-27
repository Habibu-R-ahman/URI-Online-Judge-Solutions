#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double a,b,c;
	
	cin >> a >> b >> c;
	
	cout <<"TRIANGULO: "<< fixed << setprecision(3) << (a * c) / 2 << endl;
	cout <<"CIRCULO: "  << fixed << setprecision(3) << c * c * 3.14159 << endl;
	cout <<"TRAPEZIO: " << fixed << setprecision(3) << ((a + b) / 2) * c << endl;
	cout <<"QUADRADO: " << fixed << setprecision(3) << b * b << endl;
	cout <<"RETANGULO: "<< fixed << setprecision(3) << a * b << endl;

	return 0;
}
