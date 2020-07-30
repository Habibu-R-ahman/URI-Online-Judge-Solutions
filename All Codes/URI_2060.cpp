#include <iostream>
using namespace std;
 
int main() {
 
    int t;
    cin>>t;
    int _2=0,_3=0,_4=0,_5=0;

    while(t--){
        int x;
        cin>>x;
        if(x%2==0) _2++;
        if(x%3==0) _3++;
        if(x%4==0) _4++;
        if(x%5==0) _5++;
    }
    cout<<_2<<" Multiplo(s) de 2\n";
    cout<<_3<<" Multiplo(s) de 3\n";
    cout<<_4<<" Multiplo(s) de 4\n";
    cout<<_5<<" Multiplo(s) de 5\n";
 
    return 0;
}