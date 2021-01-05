#include <iostream>
using namespace std;

int main()
{
    float n;
    cin >> n;

    if (n < 0 || n > 100)
        cout << "Fora de intervalo\n";
    else if (n <= 25){
        cout << "Intervalo [0,25]\n";
    }
    else if (n <= 50){
        cout << "Intervalo (25,50]\n";
    }
    else if (n <= 75){
        cout << "Intervalo (50,75]\n";
    }
    else if (n <= 100){
        cout << "Intervalo (75,100]\n";
    }

    return 0;
}