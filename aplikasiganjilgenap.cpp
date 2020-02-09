#include <iostream>

using namespace std;

int main(){

	int bil;

	system("cls");
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout << "\tAplikasi Menentukan Bilangan Genap/Ganjil\n";
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout << "Masukkan Bilangan : ";
	cin >> bil;


	if(bil % 2 == 0){
		system("cls");
		cout << bil << " : Bilangan Genap\n";
	}else{
		system("cls");
		cout << bil << " : Bilangan Ganjil\n";
	}
	return 0;
}