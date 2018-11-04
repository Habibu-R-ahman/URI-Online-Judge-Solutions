#include <iostream>

using namespace std;

int main() {
	
    int a,b,c,d;
    cin >> a >> b;
    
    if (a >= b){
        c = 24 - a;
        cout << "O JOGO DUROU " << c+b << " HORA(S)" << endl;
        }
    else if (b > a){
        c = 24 - a;
        d = c + b;
        cout << "O JOGO DUROU " << d-24 << " HORA(S)" << endl;
        }
    return 0;
}

