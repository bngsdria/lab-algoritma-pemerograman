#include <iostream> // Necessary header file = standard input and output stream library
using namespace std; // memungkinkan tanpa harus mengawalinya dengan ?std::?.

int main() // menyatakan awal dari program inti C++ yang akan di output
{
	int hasil[3][3]; // bentuk umum array -- 3 = baris dan 3 = kolom
	
	// looping untuk menginput nilai hasil penjualan
	for (int a = 0; a < 3; a++) // untuk variable a mulai dari 0 akan increment sampai < 3
	{
		for (int b = 0; b < 3; b++) // untuk variable a mulai dari 0 akan increment sampai < 3
		{
			cout << "Data " << a << " - " << b << " = "; // output data dengan mengeluarkan nilai a dan b saat itu
			cout << "\nJumlah Penjumlahan = "; // endl dan output "jumlah penjumlahan"
			cin >> hasil[a][b]; // menginput nilai array untuk pertama dari indeks [0][0] sampai [2][2]
		}
	}
	
	cout << "\nHASIL PENJUALAN BARANG"; // endl dan output "Hasil Penjualan Barang"
	cout << "\n==================================================="; // endl dan output tanda sama dengan sebagai pembatas
	cout << "\n\t2001\t  |\t2002\t  |\t2003\t  |"; // endl dan output tahun yang sudah ditentukan dan dibatasi dengan
	cout << "\n==================================================="; // endl dan output tanda sama dengan sebagai pembatas
	cout << endl; // cout endl, pindah ke barisan baru
	
	// looping untuk mengeluarkan nilai indeks array
	for (int a = 0; a < 3; a++) // baris pada array akan mulai dari 0 sampai 2 menghasilkan 3 baris
	{
		for (int b = 0; b < 3; b++) //kolom pada array akan mulai dari 0 sampai 2 menghasilkan 3 baris
		{
			cout << "\t " << hasil[a][b] << "\t  |"; // akan mengeluarkan / output nilai sesuai mengikuti increment
		}
		cout << endl;
	}
	cout << "===================================================\n"; // endl dan output tanda sama dengan sebagai pembatas
	
	return 0;
}
