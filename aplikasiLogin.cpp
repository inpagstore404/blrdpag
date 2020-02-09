#include <iostream>

using namespace std;

int main(){

	string username, pw;

	system("cls");
	cout << "+++++++++++++++++++++++++++++++++\n";
	cout << "\tAplikasi Login\n";
	cout << "+++++++++++++++++++++++++++++++++\n";
	cout << "Masukkan Username anda : ";
	cin >> username;

	system("cls");
	hiyapw:
	cout << "+++++++++++++++++++++++++++++++++\n";
	cout << "\tAplikasi Login\n";
	cout << "+++++++++++++++++++++++++++++++++\n";
	cout << "Masukkan Password anda : ";
	cin >> pw;

	if(username == "inpag"){
		if(pw == "1234567"){
			system("cls");
			cout << "+++++++++++++++++++++++++++++++++\n";
			cout << "\tDashboard inpagAdmin\n";
			cout << "+++++++++++++++++++++++++++++++++\n";
			cout << "Selamat... Login anda sukses\n";
			} 
		else {
			system("cls");
            cout << "Password salah, coba lagi!" << endl;
            goto hiyapw;
        }
	}else{
		system("cls");
		cout << "\tAkun anda tidak terdaftar\n";
	}
}