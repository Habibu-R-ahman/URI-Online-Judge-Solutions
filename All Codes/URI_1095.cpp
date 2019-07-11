#include <iostream>
using namespace std;

int main()
{
    int i=1,j=60;

    while(i<=37 && j>=0){
		cout << "I=" << i << " J=" << j << "\n";
        i+=3;
        j-=5;
    }

    return 0;
}
