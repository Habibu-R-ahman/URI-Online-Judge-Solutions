#include <iostream>

using namespace std;

int main() {
	
    int N,i;
    cin >> N;
    
    if (N>2 && N<1000){
		for(i=1;i<11;i++){
			cout << i << " x " << N << " = " << i * N << endl;
		}
    }
    
    return 0;
}

