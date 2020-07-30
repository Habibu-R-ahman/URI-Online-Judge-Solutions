#include <iostream>
using namespace std;

int main() {

    int t, k, n, temp;
    cin >> t;
    while (t--)
    {
        cin >> k >> n;
        if (k > n) {
            temp = (k / n) + (k % n);
        } else if (k < n) {
            temp = k;
        } else {
            temp = 1;
        }
        cout << temp << "\n";   
    }
    
    return 0;
}

