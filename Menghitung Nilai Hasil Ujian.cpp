#include <iostream>

using namespace std;

int main()
{
    int semester1,semester2,semester3,nilai,hasil;

    cout << "--------- [Menentukan Nilai Hasil Ujian] ---------\n\n";
    cout << "Masukan nilai Semester 1 : ";
    cin >> semester1;
    cout << endl;
    cout << "Masukan nilai Semester 2 : ";
    cin >> semester2;
    cout << endl;
    cout << "Masukan nilai Semester 3 : ";
    cin >> semester3;
    cout << endl;
    hasil = (semester1+semester2+semester3);
    nilai = hasil/3;
    cout << "----------------- [Hasil Akhir] ------------------\n\n";
    cout << "Hasil Rata-Rata nilai : " << nilai << endl;

    if (nilai >= 90){
        cout << "Selamat! Anda mendapatkan nilai A." << endl << endl;
    }
    else if (nilai >= 80 && nilai <= 89){
        cout << "Anda mendapatkan nilai B." << endl << endl;
    }
    else if (nilai >= 70 && nilai <= 79){
        cout << "Anda mendapatkan nilai C." << endl << endl;
    }
    else if (nilai >= 60 && nilai <= 69){
        cout << "Anda mendapatkan nilai D." << endl << endl;
    }
    else if (nilai < 60){
        cout << "Anda mendapatkan nilai E." << endl << endl;
    }
    cout << "--------------------------------------------------\n\n";
    return 0;
}
