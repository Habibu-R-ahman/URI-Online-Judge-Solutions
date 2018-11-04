#include <iostream>

using namespace std;

int main() {
	
    char a[15];
    char b[15];
    char c[15];
    
    cin >> a >> b >> c;

    if (a[0] == 'v' && b[0] == 'a' && c[0] == 'c')
		cout << "aguia" << endl;
    if (a[0] == 'v' && b[0] == 'a' && c[0] == 'o')
		cout << "pomba" << endl;
    if (a[0] == 'v' && b[0] == 'm' && c[0] == 'o')
		cout << "homem" << endl;
    if (a[0] == 'v' && b[0] == 'm' && c[0] == 'h')
		cout << "vaca" << endl;
    if (a[0] == 'i' && b[0] == 'i' && c[2] == 'm')
		cout << "pulga" << endl;
    if (a[0] == 'i' && b[0] == 'i' && c[2] == 'r')
		cout << "lagarta" << endl;
    if (a[0] == 'i' && b[0] == 'a' && c[0] == 'h')
		cout << "sanguessuga" << endl;
    if (a[0] == 'i' && b[0] == 'a' && c[0] == 'o')
		cout << "minhoca" << endl;

    return 0;
}

