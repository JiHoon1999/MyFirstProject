#include <iostream>
using namespace std;

int main(){
	int nam;
	cout << "Nhap 1 nam bat ki :" << endl;
	cin >> nam;

	if (nam >= 0 && nam <= 3000) {
		if (nam % 4 == 0) {
			cout << "Nam nhuan" << endl;
		}
		else {
			cout << "Nam thuong" << endl;

		}
	}

	return 0;
}