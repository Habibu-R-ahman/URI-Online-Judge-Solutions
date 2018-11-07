#include <iostream>

using namespace std;

int main() {
	
	int N,i;
	cin >> N;
	
	if (N < 10000) {
		
		for (i=1; i<=10000; i++) {
			if (i%N == 2)
				cout << i << endl;
		}
	}
	return 0;
}
