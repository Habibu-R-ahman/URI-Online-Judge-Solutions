#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double a,b,m;

	cin >> a >> b;
	m = (a/11 * 3.5) + (b/11 * 7.5);
	cout <<"MEDIA = "<< fixed << setprecision(5) << m << endl;

	return 0;
}
