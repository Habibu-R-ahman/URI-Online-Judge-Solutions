#include <iostream>

using namespace std;

int main()
{
	int N;
	int a[7]={100,50,20,10,5,2,1};
	int temp;
	
	cin >> N;
	cout << N << endl;

	for (int i = 0; i < 7; i++) {
		temp = N / a[i];
		N = N % a[i];
		cout << temp << " nota(s) de R$ " << a[i] << ",00" << endl;
	}
    return 0;
}
