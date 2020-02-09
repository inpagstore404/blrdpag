#include <iostream>

using namespace std;

int main(){

	int bil, jb;

	system("cls");
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout << "\tAplikasi Menentukan Bilangan Ganjil\n";
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout << "Masukkan jumlah data : ";
	cin >> bil;

	cout << "Bilangan ganjil antara 1 dan " << bil << " adalah : \n";

	for(jb = 1; jb <= bil; jb++){
		if (jb % 2 != 0)
			cout << jb << " ";
	}
	return 0;
}