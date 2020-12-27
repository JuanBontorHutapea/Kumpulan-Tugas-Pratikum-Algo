#include <iostream>
using namespace std;

int main()
{
	int bangka;
	int max = -99999, min = 99999;
	float total = 0, rata2;
	int selisih, max1 = -99999;
	cout << "Masukkan banyak angka : "; cin >> bangka;
	int arr[bangka];


	for(int i = 0; i < bangka; i++){
		cout << "Angka ke-" << i + 1 << " : "; cin >> arr[i];
	}
	cout << endl;
	cout << endl;

	cout << "_____Hasil_____"; cout << endl;

	cout << "Deret       : " ;
	for(int j = 0; j < bangka; j++){
		cout << arr[j] << " ";
	}
	cout << endl;

	cout << "Maksimum    : ";
	for(int k = 0; k < bangka; k++){
		if(arr[k] < min){
			min = arr[k];
		}
		if(arr[k] > max){
			max = arr[k];
		}
	}
	cout << max << endl;

	cout << "Minimum     : " << min << endl;

	cout << "Rata-rata   : ";
	for(int l = 0; l < bangka; l++){
		total = total + arr[l];
	}
	rata2 = (total/bangka) * 1.0;
	cout << rata2 << endl;

	cout << "Selisih max : ";
	for(int m = 0; m < bangka -1; m++){
		selisih = arr[m] - arr[m+1];
		if(selisih < 0){
			selisih = selisih * (-1);
		}
		if(selisih > max1){
			max1 = selisih;
		}
	}
	cout << max1 << endl;

	system("pause");
	
	return 0;

}
