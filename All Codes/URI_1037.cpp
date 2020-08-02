#include <iostream>
using namespace std;

int main()
{
    float n;
    cin >> n;
    if (n >= 0.00 && n<= 25.0000){
        cout << "Intervalo [0,25]\n";
    }
    else if (n>=25.00001 && n<=50.000000){
        cout << "Intervalo (25,50]\n";
    }
    else if (n>=50.0000001 && n<=75.000000){
        cout << "Intervalo (50,75]\n";
    }
    else if (n>=75.0000001 && n<=100.000000){
        cout << "Intervalo (75,100]\n";
    }
    else
        cout << "Fora de intervalo\n";
    return 0;
}