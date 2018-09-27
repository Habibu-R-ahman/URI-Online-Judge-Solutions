#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double a,b;
	char word[256];

	cin >> word >> a >> b;
	cout <<"TOTAL = R$ "<< fixed << setprecision(2) << a+((b/100)*15) <<endl;

	return 0;
}
