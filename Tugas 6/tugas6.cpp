#include <iostream>
using namespace std;

void garis();
float luas(int a);
float keliling(int b);
float volume(int x, int y);

int main()
{
    short pilih;
    string ulangi;
    int j, t;
    
    do{
    cout << "Hitung Lingkaran "; garis();
    cout << "1. Luas Lingkaran\n2. Keliling Lingkaran\n3. Volume Tabung\n";
    cout << "Pilih : "; cin >> pilih;

    switch(pilih){
        case 1 :
            cout << "Jari - jari    : "; cin >> j;
            cout << "Luas Lingkaran adalah " << luas(j) << endl;
            break;

        case 2 :
            cout << "Jari jari         : "; cin >> j;
            cout << "Keliling Lingkaran adalah " << keliling(j) << endl;
            break;

        case 3 :
            cout << "Jari - jari     : "; cin >> j;
            cout << "Tinggi          : "; cin >> t;
            cout << "Volume Tabung adalah " << volume(j, t) << endl;
            break;

        default :
            cout << "Input Salah :)" << endl;
            break;
    }
    cin.ignore();
    cout << "Ulangi program? (y/n) "; cin >> ulangi;
    cout << endl;
    }while(ulangi == "Y" || ulangi == "y");
    cout << "Program selesai, Terima kasih :)\n\n";
    system("pause");
    return 0;
}

void garis(){
    cout << "==========" << endl;
}

float luas(int a){
    float luas;
    luas = 3.14 * a * a;
    return luas;
}
float keliling(int b){
    float luas1;
    luas1 = 3.14 * 2 * b;
    return luas1;
}
float volume(int x, int y){
    float luas2;
    luas2 = 3.14 * x * x * y;
    return luas2;
}