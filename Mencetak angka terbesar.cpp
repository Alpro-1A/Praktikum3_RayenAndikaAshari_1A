#include <iostream>

using namespace std;

int main() {
    int hasil1,hasil2,hasil3;

    cout << "--------- [Menentukan Nilai Praktek] ---------\n\n";
    cout << "Masukan nilai Alpro 1 : ";
    cin >> hasil1;
    cout << endl;
    cout << "Masukan nilai Alpro 2 : ";
    cin >> hasil2;
    cout << endl;
    cout << "Masukan nilai Alpro 3 : ";
    cin >> hasil3;
    cout << endl;
    cout << "-------------- [Nilai Terbesar] --------------\n\n";
    if (hasil1 > hasil2 && hasil1 > hasil3){
        cout << "Nilai terbesarnya adalah : " << hasil1 << endl << endl;
    }
    else if (hasil2 > hasil1 && hasil2 > hasil3){
        cout << "Nilai terbesarnya adalah : " << hasil2 << endl << endl;
    }
    else {
        cout << "Nilai terbesarnya adalah : " << hasil3 << endl << endl;
    }
    cout << "----------------------------------------------\n";
    return 0;
}
