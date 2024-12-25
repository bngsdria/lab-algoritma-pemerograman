//... Program untuk menampilkan 3 jenis operasi bilangan

#include <iostream>
using namespace std;

int main()
{
    //... Penjumlahan 2 bilangan
    int addA;
    int addB;

    cout << "1 - Penjumlahan\n";

    cout << "Masukkan nilai A: ";
    cin >> addA;
    cout << "Masukkan nilai B: ";
    cin >> addB;
    
    cout  << "Hasil dari A + B = " << addA + addB << endl;

    //... Pengurangan 2 bilangan
    int substractA;
    int substractB;

    cout << "\n2 - Pengurangan\n";

    cout << "Masukkan nilai A: ";
    cin >> substractA;
    cout << "Masukkan nilai B: ";
    cin >> substractB;

    cout << "Hasil dari A - B = " << substractA - substractB << endl;

    //... Perkalian 2 bilangan
    int multiplyA;
    int multiplyB;

    cout << "\n3 - Perkalian\n";

    cout << "Masukkan nilai A: ";
    cin >> substractA;
    cout << "Masukkan nilai B: ";
    cin >> substractB;

    cout << "Hasil dari A * B = " << substractA * substractB << endl;

    return 0;
}