#include <iostream>
using namespace std;

int main()
{
	int a, t;

	cout << "Gambar Bangun Datar ===========" << endl;
	cout << "1. Kotak bolong" << endl;
	cout << "2. Segitiga" << endl;
	cout << "Pilih : ";
	cin >> a;
	cout << endl;

	switch(a){
		case 1 :
			int p, l;
			cout << "Panjang : "; 
			cin >> p;
			cout << "Lebar   : "; 
			cin >> l;
			for(int i = 1; i <= p; i++){
				for(int j = 1; j <= l; j++){
					if(i == 1 || i == p || j == 1 || j == l){
						cout << "* ";
					}else{
						cout << "  ";
					}
				}
				cout << endl;
			}
			cout << endl;
			break;
		case 2 : 
			cout << "Tinggi : ";
			cin >> t;
			for(int j = 1; j <= t; j++){
				int x = 1;
				int y = j;
				for (int k = 1; k <= j; k++){
					cout << y << " ";
					y = y+(t-x);
					x++;
				}
			cout << "\n";
			}
			cout << endl;
			break;
	}

	system("pause");
	cin.get();
	return 0;
}
