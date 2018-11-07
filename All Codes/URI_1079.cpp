#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
    int N,i,j;
    cin >> N;
    float a[N*3], b[N*3];
    
    for(i=0; i<N*3 ;i++) {
        cin >> a[i];
	}
    for(j=0; j<N*3; j=j+3) {
		
        b[j] = (a[j]*.2) + (a[j+1]*.3) + (a[j+2]*.5);
        cout << fixed << setprecision(1) << b[j] << endl;
    }
    
    return 0;
}


