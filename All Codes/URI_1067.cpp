#include <iostream>

using namespace std;

int main() {
	
    int X,Y;
    cin >> X;
    
    if (X>=1 && X<=1000) {
		
		for (Y=1; Y<=X; Y++) {
			
            if (Y%2 != 0) {
				cout << Y << endl;
            }
        }
        
    return 0;
    }
}
