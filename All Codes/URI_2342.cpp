#include <iostream>
using namespace std;

int main() {

    int total, a, b;
    char ch;

    cin >> total;
    cin >> a >> ch >> b;

    if (ch == '+') {
        cout << (((a + b) <= total) ? "OK" : "OVERFLOW") << "\n";
    } else {
        cout << (((a * b) <= total) ? "OK" : "OVERFLOW") << "\n";
    }
    
    return 0;
}