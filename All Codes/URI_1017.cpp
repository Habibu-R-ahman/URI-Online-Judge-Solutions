#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float a,b;

	cin >> a >> b;
	cout << fixed << setprecision(3) << (a * b)/12 << endl;
	
	return 0;
}
