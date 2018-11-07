#include <iostream>

using namespace std;

int main() {
	
	int a,b,c,aa=0,bb=0,cc=1,d=0;
	x:
	cin >> a >> b;
	
	if (a>b)
		aa++;
	else if (a<b)
		bb++;
	else if(a==b)
		d++;
		
	cout << "Novo grenal (1-sim 2-nao)" << endl;
	cin >> c;
	
	if (c == 1) {
		cc++;
		goto x;
	}
	else {
		
		cout << cc << " grenais" << endl;
		cout << "Inter:" << aa << endl;
		cout << "Gremio:" << bb << endl;
		cout << "Empates:" << d << endl;
		
		if (aa > bb) 
			cout << "Inter venceu mais" << endl;
		else if (aa < bb)
			cout << "Gremio venceu mais" << endl;
		else
			cout << "Não houve vencedor" << endl;
		
		return 0;
	}
}

