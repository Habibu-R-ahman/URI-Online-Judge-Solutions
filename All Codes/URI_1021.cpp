#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int c[12],n,f,i;
    int num[] = {100,50,20,10,5,2,100,50,25,10,5,1};
    double x;
    
    cin >> x;
    
    n = x;
    f = x * 100;
    f = f % 100;
    
    cout << "NOTAS:" << endl;
    for(i=0; i<6; i++)
    {
        c[i] = n / num[i];
        n = n % num[i];
        cout << c[i] << " nota(s) de R$ " << num[i] << ".00" << endl;
    }
    if(n == 1)
		f = f+100;
    cout << "MOEDAS:" << endl;
    
    for(i=6; i<12; i++)
    {
		c[i] = f / num[i];
        f = f % num[i];
        cout << c[i] << " moeda(s) de R$ " << fixed << setprecision(2) << num[i]/100.0 << endl;
    }
    return 0;

}

