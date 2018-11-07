#include <iostream>

using namespace std;

int main() {
	
    int a,i,j=0;
    long int x;
    cin >> a;
    
    for(i=0; i<a; i++){
        cin >> x;
        if (x>9 && x<21){
            j++;
        }
    }
    
    cout << j << " in" << endl << a-j << " out" << endl;
    
    return 0;
}
