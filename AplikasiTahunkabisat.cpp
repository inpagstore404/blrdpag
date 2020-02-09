#include <iostream>

using namespace std;

int main(){

	int tahun;

	system("cls");
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout << "\tAplikasi Menentukan Tahun Kabisat\n";
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout << "Masukkan tahun : ";
	cin >> tahun;


	if(tahun % 4 == 0){
		system("cls");
		cout << tahun << " Tahun Kabisat!\n";
	}else{
		system("cls");
		cout << tahun << " Bukan Tahun Kabisat!!\n";
	}
	return 0;
}