#include <iostream>

using namespace std;

int main() {
	
    int a,b,i;
    cin >> a;
    
    if (a>5 && a<2000) {
        for(i=1; i<=a; i++) {
            if (i%2 == 0) {
                b = i * i;
                cout << i << "^2 = " << b << endl;
            }
        }
    }
    
    return 0;
}

