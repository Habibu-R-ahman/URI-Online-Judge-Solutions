#include <iostream>

using namespace std;

int main() {
	
    int N,y,m,d;
    cin >> N;

    y = N / 365;
    m = (N % 365) / 30;
    d = (N % 365) % 30;
    
    cout << y << " ano(s)" << endl;
    cout << m << " mes(es)" << endl;
    cout << d << " dia(s)" << endl;
    
    return 0;
}

