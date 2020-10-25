#include <iostream>
using namespace std;

int main()
{
	int umur1, umur2, umur3, umur4;
	int b1, b2, b3, b4;
	int btotal;

	cout << "Umur Ayah : "; cin >> umur1;
	cout << "Umur Ibu  : "; cin >> umur2;
	cout << "Umur Anak 1   : "; cin >> umur3;
	cout << "Umur Anak 2   : "; cin >> umur4;


	if (umur1 <=12){
		b1 = 15000;
	} else if (umur1 > 12 && umur1 < 20){
		b1 = 20000;
	} else if (umur1 >20){
		b1 = 30000;
	}

	if (umur2 <=12){
		b2 = 15000;
	} else if (umur2 > 12 && umur2 < 20){
		b2 = 20000;
	} else if (umur2 >20){
		b2 = 30000;
	}

	if (umur3 <=12){
		b3 = 15000;
	} else if (umur3 > 12 && umur3 < 20){
		b3 = 20000;
	} else if (umur3 >20){
		b3 = 30000;
	}

	if (umur4 <=12){
		b4 = 15000;
	} else if (umur4 > 12 && umur4 < 20){
		b4 = 20000;
	} else if (umur4 >20){
		b4 = 30000;
	}

	btotal = 30*(b1+b2+b3+b4);

	cout << "Tagihan Satu Bulan adalah Rp " << btotal << endl;

	cin.get();

	cout << "Terima Kasih" << endl;

	cin.get();
	return 0;
}
