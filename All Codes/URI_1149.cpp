#include <iostream>

using namespace std;

int main() {
	
	int a,b,i,j=0;
	cin >> a >> b;
	
	while(b<=0){
		cin >> b;
	}
	for(i=0; i<b; i++){
		j += a+i;
	}
	cout << j << endl;
	
	return 0;
}

