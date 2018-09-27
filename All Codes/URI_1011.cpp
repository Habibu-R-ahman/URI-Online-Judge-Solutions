#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int a;

	cin >> a;
	cout <<"VOLUME = "<< fixed << setprecision(3) << ((4 * 3.14159 * a*a*a)/3) << endl;

	return 0;
}
