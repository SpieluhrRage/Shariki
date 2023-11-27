#include<iostream>
using namespace std;
int generate(int t, int n, int* mas) {
	if (t == (n - 1)) {
		for (int i = 0; i < n; ++i) {
			cout << mas[i] << " ";
			
		}
		cout << endl;
		return *mas;
	}
	else {
		for (int j = t; j < n; j++) {
			swap(mas[t], mas[j]);
			t++;
			generate(t, n, mas);
			t--;
			swap(mas[t], mas[j]);
		}
	}
	}

int main() {
	int mass[9] = { 1, 0, 2, 8, 3, 7, 4, 6, 5 };
	for (int i = 0; i <= 8; i++) {

	}
}