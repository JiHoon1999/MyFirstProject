#include <iostream>
using namespace std;

int main() {
	int nam, thang;
	cout << "Nhap vao thang va nam:";
	cin >> thang >> nam;
	cout << "Ban vua nhap thang: " << thang << endl;
	cout << "Ban vua nhap nam: " << nam << endl;

	if (thang < 1 || thang > 12) {
		cout << "Thang " << thang << " ban da nhap sai" << endl;
	}

	if (nam < 0) {
		cout << "Nam " << nam << " ban vua nhap sai" << endl;

	}

	if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 12) {
		cout << "Thang " << thang << " co 31 ngay " << endl;
	}
	if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
		cout << "Thang " << thang << " co 30 ngay " << endl;
	}
	if (thang == 2 && nam % 4 == 0){
		cout << "Thang " << thang << " co 29 ngay " << endl;

		
	}
	if (thang == 2 && nam % 4 != 0) {
		cout << "Thang " << thang << " co 28 ngay" << endl;

	}



	



	cout << endl;
	system("pause");
	return 0;
}