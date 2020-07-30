#include <iostream>
using namespace std;

int main() {

    int a, point = 0;
    cin >> a;

    if (a < 801) {
        point = 1;
    } else if (a < 1401) {
        point = 2;
    } else if (a < 2001) {
        point = 3;
    }
    cout << point << "\n";
    
    return 0;
}
