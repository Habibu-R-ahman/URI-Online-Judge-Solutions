#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
    double a,b=0,c;
    int x,y=0;
    
    for (x=1;x<=6;x++) {
		cin >> a;
			if (a >= 0){
				y++;
				b += a;
			}
		}
		
    c = b / y;
    cout << y << " valores positivos" << endl;
    cout << fixed << setprecision(1) << c << endl;
    
    return 0;
}

