#include <iostream>
using namespace std;

int main()
{
	string username;
	int password;
	int pilih;
	float harian, uts, uas;
	float hasil;

	cout << "======Login Akun======" << endl;
	cout << "Username\t : "; 
	cin >> username;
	cout << "Password\t : "; 
	cin >> password;
	cout << "======================" << endl;

	if(username == "juan" && password == 321){
		cout << "\nLogin Berhasil!" << endl;
		cout << "Input Nilai Mata Kuliah" << endl;
		cout << "1. Algoritma dan Pemrograman\n";
		cout << "2. Kalkulus\n";
		cout << "Pilih : ";
		cin >> pilih;
		if(pilih == 1){
			cout << "Nilai Harian : "; cin >> harian;
			cout << "Nilai UTS    : "; cin >> uts;
			cout << "Nilai UAS    : "; cin >> uas;
			cout << endl;
			hasil = (harian + uts + uas)/3;
			if(hasil >= 80){
				cout << "Anda lulus Algoritma dan Pemrograman dengan nilai = " << hasil << endl;
			}else{
				cout << "Anda tidak lulus Algoritma dan Pemrograman dengan nilai = " << hasil << endl;

			}
		}else if(pilih == 2){
			cout << "Nilai Harian : "; cin >> harian;
			cout << "Nilai UTS    : "; cin >> uts;
			cout << "Nilai UAS    : "; cin >> uas;
			cout << endl;
			hasil = (harian + uts + uas)/3;
			if(hasil >= 80){
				cout << "Anda lulus Kalkulus dengan nilai = " << hasil << endl;
			}else{
				cout << "Anda tidak lulus Kalkulus dengan nilai = " << hasil << endl;
			}
		}else{
			cout << "\nInput anda salah!\n" << endl;
			cout << "\n-----------------" << endl;
		}
	}else if(username == "juan" && password != 321){
		cout << "Password anda salah!" << endl;
	}else if(username != "juan" && password == 321){
		cout << "Username anda salah!" << endl;
	}else if(username != "juan" && password !=321){
		cout << "Username dan Password anda salah!\n" << endl;
	}
	system("pause");
	cin.get();
	return 0;

}
