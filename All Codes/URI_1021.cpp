#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

    string title = " nota(s) de R$ ";
    int temp, n;
    int arr[12] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};
    double N;
    cin >> N;
    n = (int)(N * 100 + 0.00001);
    cout << fixed << setprecision(2) << "NOTAS:\n";

    for (int i = 0; i < 12; i++) {
        temp = n / arr[i];
        n = n % arr[i];
        if (i == 6) {
            title = " moeda(s) de R$ ";
            cout << "MOEDAS:\n";
        }
        
        cout << temp << title << arr[i]/100.00 << "\n";
    }
    
    return 0;
}

/*
MOEDAS:
0 moeda(s) de R$ 1.00
N = 0.35
0 moeda(s) de R$ 0.50
N = 0.10
1 moeda(s) de R$ 0.25
N = 0.10
0 moeda(s) de R$ 0.10
N = 0.05
1 moeda(s) de R$ 0.05
N = 0.01
4 moeda(s) de R$ 0.01
*/