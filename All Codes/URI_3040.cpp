#include <iostream>
using namespace std;

int main() {

    int t, h, d, g;

    cin >> t;
    while (t--)
    {
        // cin >> h >>  d >> g;
        scanf("%d %d %d", &h, &d, &g);

        if (h <= 300 && h >= 200 && d >= 50 && g >= 150)
        {
            cout << "Sim" << "\n";
        }
        else
        {
            cout << "Nao" << "\n";
        }
    }
    
    
    return 0;
}