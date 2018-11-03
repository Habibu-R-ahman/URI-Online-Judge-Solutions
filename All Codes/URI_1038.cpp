#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	int X,Y;
	cin >> X >> Y;
	
	switch(X)
	{
		case 1:
		cout << "Total: R$ " << fixed << setprecision(2) << 4.00 * Y << endl;
		break;
		
		case 2:
		cout << "Total: R$ " << fixed << setprecision(2) << 4.50 * Y << endl;
		break;
		
		case 3:
		cout << "Total: R$ " << fixed << setprecision(2) << 5.00 * Y << endl;
		break;
		
		case 4:
		cout << "Total: R$ " << fixed << setprecision(2) << 2.00 * Y << endl;
		break;
		
		case 5:
		cout << "Total: R$ " << fixed << setprecision(2) << 1.5 * Y << endl;
		break;
	}
	
	return 0;
}

