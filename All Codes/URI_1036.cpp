#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	
    double A,B,C,R1,R2,root;
    cin >> A >> B >> C;
    
    root = (B * B - 4 * A * C);
    
    if(A != 0 && root > 0)
    {
        R1 = (- B + sqrt(root)) / (2 * A);
        R2 = (- B - sqrt(root)) / (2 * A);
        
        cout << "R1 = " << fixed << setprecision(5) << R1 << endl;
        cout << "R2 = " << fixed << setprecision(5) << R2 << endl;
    }
    else
        printf("Impossivel calcular\n");
    
    return 0;
}
