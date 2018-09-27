#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a,b,c,d;
    float g,h,e;
    
    cin >> a >> b >> g;
    cin >> c >> d >> h;
    e = (b*g) + (d*h);
    
    cout <<"VALOR A PAGAR: R$ "<< fixed << setprecision(2) << e << endl;
    
    return 0;
}
