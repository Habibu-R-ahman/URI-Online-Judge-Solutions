#include <iostream>

using namespace std;

int main() {
	
	int a,b,i=0,j=0;
	cin >> a >> b;
	
	while(b <= a){
		cin >> b;
	}
	while(j <= b){
		j += a+i;
		i++;
	}
	cout << i << endl;
	
	return 0;
}

