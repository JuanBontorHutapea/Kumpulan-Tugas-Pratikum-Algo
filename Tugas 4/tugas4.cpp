#include <iostream>
using namespace std;

int main()
{
	int a, a1, an, b, b1, bm, pil;
	char ulang;

	do{cout << "Perkalian dan Perpangkatan" << endl;
	cout << "1. Perkalian" << endl;
	cout << "2. Perpangkatan" << endl;
	cout << "Pilih: ";
	cin >> pil;

		switch(pil){
			case 1:

			cout << "Input angka N: ";
			cin >> a;
			cout << "Input angka M: ";
			cin >> b;
			if (b >= 0 && a >= 0){
			cout << b;
			b1 = b;
			for(int i = 1; i < a; i++){
				cout << " + " << b;
				bm = b1 + b;
				b1 = bm;
			}
			cout << " = " << bm << endl;
			} else{cout << "HANYA BISA MEMASUKKAN ANGKA POSITIF" << endl;}
			break;

			case 2: 

			cout << "Input angka N: ";
			cin >> a;
			cout << "Input angka M: ";
			cin >> b;
			if (a >= 0 && b >= 0){
			cout << a;
			a1 = a;
			for(int i = 1; i < b; i++){
				cout << " * " << a;
				an = a1 * a;
				a1 = an;
			}
			cout << " = " << an << endl;
			} else{cout << "HANYA BISA MEMASUUKKAN ANGKA POSITIF" << endl;}
			break;

			default:
				cout << "\nInput yang Anda Masukkan Salah!" << endl;
			}
			cout << "\nIngin menghitung lagi (Y/N) : ";
			cin >> ulang;	
		} while ( ulang == 'Y' || ulang == 'y');

		cout << "\nTerima Kasih Telah Menggunakan Program Ini\n" << endl;

	system("pause");
	cin.get();
	return 0;

}	 

