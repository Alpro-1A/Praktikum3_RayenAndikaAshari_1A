#include <iostream>

using namespace std;

int main() {
    int bidang;
    float sisi, panjang, lebar, alas, tinggi, hasil, luas;

    cout << "--------- [Menghitung Luas Bidang] ---------\n\n";
    cout << "1) Persegi panjang" << endl << endl;
    cout << "2) Persegi" << endl << endl;
    cout << "3) Segitiga" << endl << endl;
    cout << "Pilih bidang yang ingin dihitung: ";
    cin >> bidang;
    cout << endl;
    cout << "------------- [Masukan Nilai] --------------\n\n";
    switch (bidang){
        case 1:
            cout << "Masukkan panjang : ";
            cin >> panjang;
            cout << endl;
            cout << "Masukkan lebar : ";
            cin >> lebar;
            cout << endl;
            luas = (panjang * lebar);
            cout << "Rumusnya = Panjang x Lebar \n\n";
            cout << "Luas persegi panjangnya adalah " << luas << endl << endl;
            break;
        case 2:
            cout << "Masukkan panjang sisi persegi : ";
            cin >> sisi;
            cout << endl;
            luas = (sisi*sisi);
            cout << "Rumusnya = Sisi x Sisi \n\n";
            cout << "Luas perseginya adalah : " << luas << endl << endl;
            break;
        case 3:
            cout << "Masukkan alas : ";
            cin >> alas;
            cout << endl;
            cout << "Masukkan tinggi : ";
            cin >> tinggi;
            cout << endl;
            hasil = (alas*tinggi);
            luas = hasil/2;
            cout << "Rumusnya = Alas x Tinggi / 2 \n\n";
            cout << "Luasnya adalah: " << luas << endl;
            break;
        default:
            cout << "Maaf, Pilihan anda tidak ada di menu." << endl;
    }
            cout << "--------------------------------------------\n\n";
    return 0;
}
