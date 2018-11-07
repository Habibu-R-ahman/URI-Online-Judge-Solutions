#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	float a=1.0, b=0;
	int i;
	
	for(i=1; i<101; i++){
		b += (a/i);
	}
	cout << fixed << setprecision(2) << b << endl;
	
	return 0;
}
