#include <iostream>

using namespace std;

int main() {
	
    int a[5];
    int i,e=0,o=0,p=0,n=0;
    
    for (i=0;i<5;i++) {
		
        cin >> a[i];

        if(a[i]%2 == 0)
            e++;
        if(a[i]%2 != 0)
            o++;
        if(a[i] > 0)
            p++;
        if(a[i] < 0)
            n++;
    }
    cout << e << " valor(es) par(es)" << endl << o << " valor(es) impar(es)" << endl;
    cout << p << " valor(es) positivo(s)"<< endl << n <<" valor(es) negativo(s)" << endl;
    
    return 0;
}
