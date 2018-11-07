#include <iostream>

using namespace std;

int main() {
	
    int a,i,b=0;
    
    for (i=0; i<5; i++) {
        cin >> a;
        
        if (a%2==0)
            b++;
    }
    cout << b << " valores pares" << endl;
    
    return 0;
}


