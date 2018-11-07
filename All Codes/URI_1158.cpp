#include <iostream>

using namespace std;

int main() {
	
	int a,b,n,i,j,k=0,s=0;
	cin >> n;
	
	for(i=0; i<n; i++){
		cin >> a >> b;
		
		for(j=a; k<b ;j++){
			if (j%2!=0){
				s = s + j;
				k++;
			}
		}
		cout << s << endl;
		k = 0;
		s = 0;
	}
	return 0;
}

