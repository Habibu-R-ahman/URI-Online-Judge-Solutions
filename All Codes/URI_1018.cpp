#include <iostream>

using namespace std;

int main()
{
	int i,N;
	int a[7]={100,50,20,10,5,2,1};
	int b[7];
	
	cin >> N;
	cout << N << endl;

	for(i=0;i<7;i++){
		b[i] = N/a[i];
		N = N%a[i];
		}
	for(i=0;i<7;i++){
			cout << b[i] << " nota(s) de R$ " << a[i] << ",00" << endl;
		}

    return 0;
}
