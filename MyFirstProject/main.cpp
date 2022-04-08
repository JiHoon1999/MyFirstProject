#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Vui long nhap vao n:";
	cin >> n;
	if (n > 0) {
		for (int i = 0; i < n; i++) {
			if ( i % 2 != 0) {
				cout << i << " ";
			}
		}
		
	}
	else {
		cout << "Ban da nhap sai" << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}