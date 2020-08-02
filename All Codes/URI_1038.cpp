#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	int X,Y;
	float arr[] = {4.00, 4.50, 5.00, 2.00, 1.50};

	cin >> X >> Y;
	cout << "Total: R$ " << fixed << setprecision(2) << arr[X-1] * Y << "\n";

	return 0;
}

