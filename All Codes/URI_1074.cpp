#include <iostream>

using namespace std;

int main() {
	
    int i,j,k[10000];
    cin >> j;
    
    for (i=0; i<j; i++) {
        cin >> k[i];
    }
    for (i=0; i<j; i++) {
        if(k[i] == 0)
			cout << "NULL" << endl;
    else if (k[i]%2 == 0) {
            if (k[i]>0)
                cout << "EVEN POSITIVE" << endl;
            else
                cout << "EVEN NEGATIVE" << endl;
		}
    else if (k[i]%2 != 0) {
            if(k[i]>0)
                cout << "ODD POSITIVE" << endl;
            else
                cout << "ODD NEGATIVE" << endl;
        }
    }
    
    return 0;
}

