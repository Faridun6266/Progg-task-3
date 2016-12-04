#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	int n1, n = 3;
	cin >> n1;
	if (n1 < 0) return (0);
	int m = n1 % 4;
	int mas[3][3] = { { 1,2,3 },{ 4,5,6 },{ 7,8,9 } };

	for (int i = 0; i<n; i++) {
		for (int j = 0; j <n; j++)
			cout << setw(3) << mas[i][j];
		cout << endl;
	}
	if (n1 == 1 || m == 1) {
		cout << "----90----" << endl;


		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++)
				cout << setw(3) << mas[n - 1 - j][i];
			cout << endl;
		}
	}
	if (n1 == 2 || m == 2) {
		cout << "----180------" << endl;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++)
				cout << setw(3) << mas[n - i - 1][n - 1 - j];
			cout << endl;
		}
	}
	if (n1 == 3 || m == 3) {
		cout << "---270------" << endl;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++)
				cout << setw(3) << mas[j][n - 1 - i];
			cout << endl;
		}

	}
	if (n1 == 0 || m == 0) {
		cout << "---360------" << endl;
		for (int i = 0; i<n; i++) {
			for (int j = 0; j <n; j++)
				cout << setw(3) << mas[i][j];
			cout << endl;
		}
	}

	cout << "------------" << endl;
	system("pause");
}
