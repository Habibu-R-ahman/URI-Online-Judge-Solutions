#include <iostream>
using namespace std;

int main() {

    int m, a, b;
    int max, temp;

    cin >> m >> a >> b;

    max = (a + b + abs(a - b)) * 0.5;
    temp = m - (a + b);

    cout << ((max >= temp) ? max : temp) << "\n";

    return 0;
}