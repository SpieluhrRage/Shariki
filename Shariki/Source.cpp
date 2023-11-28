#include<iostream>
using namespace std;
void generate(int t, int n, int* mas, int &ct) {
	
	bool fl = false;
	
	if (t == (n - 1)) {
		/*for (int i = 0; i < n; ++i) {
			cout << mas[i] << " ";
			
		}
		cout << endl;*/
		for (int i = 0; i <= 8; i++) {
			if (i == mas[i]) {
				fl = true;
			}
		}
		if (fl) {
			ct++;
			fl = false;
		}
			
		
	}
	else {
		
		for (int j = t; j < n; j++) {
			swap(mas[t], mas[j]);
			t++;
			generate(t, n, mas, ct);
			t--;
			swap(mas[t], mas[j]);
		}
	}
	
	}

int main() {
	int ct = 0;
	int mass[9] = { 1, 0, 2, 8, 3, 7, 4, 6, 5 };
	generate(0, 9, mass, ct);
	cout << ct;
	

}