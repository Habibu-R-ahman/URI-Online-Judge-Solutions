#include <iostream>
 
using namespace std;
 
int main()
{
    int a, b, c, aux=0;
    
    cin >> a >> b >> c;
    
    if(a>b && a>c)
		aux = a;
    else if(b>c && b>a)
        aux = b;
    else
        aux = c;
        
    cout << aux << " eh o maior" << endl;

    return 0;
}
