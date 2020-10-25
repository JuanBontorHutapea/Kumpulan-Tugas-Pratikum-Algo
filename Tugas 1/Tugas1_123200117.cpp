#include <iostream>
using namespace std;

int main()
{
	cout << "Program Input Output\n";

	char kata[35];
	int Uts, Uas, NIM, hasil1; 

	cout << "\nNama : ";
	cin.getline(kata, 35);
	cout << "\nNIM : ";
	cin >> NIM;
	cout << "\nUts : ";
	cin >> Uts;
	cout << "\nUas : ";
	cin >> Uas;

	hasil1 = (Uts+Uas)/2;
	cout << "\nNilai rata-rata = " << hasil1 << endl;

	cin.get();

	cout << "\nTerima Kasih Sudah Menggunakan Program" << endl;

	cin.get();
	return 0;

	
}
