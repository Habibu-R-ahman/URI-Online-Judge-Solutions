#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
    double N1, N2, N3, N4, N5, a,b;
    cin >> N1 >> N2 >> N3 >> N4;
    
    a = ((N1 * 2) + (N2 * 3) + (N3 * 4) + N4) / 10;
    
    cout << "Media: " << fixed << setprecision(1) << a << endl;
    
    if(a >= 7)
        cout << "Aluno aprovado." << endl;
    else if(a >=5 && a <= 6.9)
    {
        cout << "Aluno em exame." << endl;
        cin >> N5;
        cout << "Nota do exame: " << N5 << endl;
        
        b = (N5 + a) / 2;
        
        if(b >= 5)
            cout << "Aluno aprovado." << endl;
        else if(b <= 4.9)
            cout << "Aluno reprovado." << endl;
        cout << "Media final: " << b << endl;
    }
    
    else
        cout << "Aluno reprovado." << endl;
    
    return 0;
}

