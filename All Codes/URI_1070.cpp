#include <iostream>

using namespace std;

int main() {
	
    int X,i;
    cin >> X;
    
    for (i=0; i<11; i++) {
        a:
        if (X%2 != 0) {
            cout << X << endl;
            i++;
            X++;
        }
        else {
            X++;
            goto a;
        }
    }
    return 0;
}

