#include <iostream>

using namespace std;

int main() {
	
    int start_h, end_h, start_m, end_m, duration_h, duration_m;
    cin >> start_h >> start_m >> end_h >> end_m;
    
    duration_h = end_h - start_h;

    if (duration_h < 0) {
        duration_h = 24 + (end_h - start_h);
	}
	duration_m = end_m - start_m;
	
	if (duration_m < 0) {
		duration_m = 60 + (end_m - start_m);
		duration_h--;
		}

    if (start_h == end_h && start_m == end_m)
		cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    else 
		cout << "O JOGO DUROU " << duration_h <<" HORA(S) E " << duration_m <<" MINUTO(S)" << endl;
    
    return 0;
}

