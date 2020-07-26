#include <iostream>
 
using namespace std;
 
int main()
{
    int a,b,c,d,e;
    
    cin >> a >> b >> c;
    
	d = (a + b + abs(a - b)) / 2;
    e = (d + c + abs(c - d)) / 2;
        
    cout << e << " eh o maior" << endl;

    return 0;
}
