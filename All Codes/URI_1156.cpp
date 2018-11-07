#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
    int i;
    float S=0,j=1;
    
    for(i = 1;i <= 39;i += 2){
        S = S + (i/j);
        j = j + j;
    }
    cout << fixed << setprecision(2) << S << endl;
    
    return 0;
}

