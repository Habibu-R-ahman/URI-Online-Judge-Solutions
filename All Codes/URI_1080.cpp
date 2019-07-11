#include <iostream>
using namespace std;

int main()
{
    int i,input,mx=0,position;

    for(i=1; i<=100; i++){
		cin >> input;

        if(mx < input){
            mx = input;
            position = i;
        }
    }
    cout << mx << "\n" << position << "\n";

    return 0;
}
