#include <iostream>

using namespace std;

int main(){

	int a,i,j;
	cin >> a;

	for(i=a, j=0; j < 6; i++){
		if(i % 2 != 0){
			cout << i << "\n";
			j++;
		}
	}
	return 0;
}
