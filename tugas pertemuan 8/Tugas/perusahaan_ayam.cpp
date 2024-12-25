#include <iostream>
using namespace std;

int main()
{
	const float pajak = 0.1;
	const int harga_satuan[3] = {2500, 2000, 1500};
	const char kode_jenis[3] = {'D', 'P', 'S'};
	
	cout << "GEROBAK FRIED CHICKEN\n";
	cout << "---------------------\n";
	cout << "Kode\tJenis\tHarga\n";
	cout << "-----------------------------\n";
	cout << "  D\tDada\tRp. " << harga_satuan[0] << '\n';
	cout << "  P\tPaha\tRp. " << harga_satuan[1] << '\n';
	cout << "  S\tSayap\tRp. " << harga_satuan[2] << '\n';
	cout << "-----------------------------\n";
	
	int banyakJenis;
	cout << "Banyak Jenis : ";
	cin >> banyakJenis;
	
	char jenisPembelian[banyakJenis];
	int banyakPotong[banyakJenis];
	
	for (int i = 0; i < banyakJenis; i++)
	{
		char jenisPotong;
		bool jenisPotong_isValid;
		cout << "Jenis Ke - " << i + 1 << '\n';
		do
		{
			cout << "Jenis Potong [D/P/S]\t: ";
			cin >> jenisPotong;
			jenisPotong_isValid = (jenisPotong == 'D' || jenisPotong == 'd' || jenisPotong == 'P' || jenisPotong == 'p' || jenisPotong == 'S' || jenisPotong == 's');
			if (!jenisPotong_isValid)
			{
				cout << "Kesalahan input jenis potong.\n";
			}
		} while (!jenisPotong_isValid);
		
		int amount;
		cout << "Banyak Potong\t\t: ";
		cin >> amount;
		jenisPembelian[i] = jenisPotong;
		banyakPotong[i] = amount;
	}
	
	// Penyatuan data bila ada data duplikat
	int totalBanyakPotong[3] = {0, 0, 0};
	for (int i = 0; i < banyakJenis; i++)
	{
		if (jenisPembelian[i] == 'D' || jenisPembelian[i] == 'd')
		{
			totalBanyakPotong[0] += banyakPotong[i];
		}
		else if (jenisPembelian[i] == 'P' || jenisPembelian[i] == 'p')
		{
			totalBanyakPotong[1] += banyakPotong[i];
		}
		else
		{
			totalBanyakPotong[2] += banyakPotong[i];
		}
	}
	
	// Proses total bayar dan total harga
	int totalHarga_berdasarkanJenis[3];
	int totalBayar_tanpaPajak = 0, harga_pajak, totalBayar_denganPajak;
	for (int i = 0; i < 3; i++)
	{
		if (totalBanyakPotong[i] == 0){continue;}
		totalHarga_berdasarkanJenis[i] = totalBanyakPotong[i] * harga_satuan[i];
		totalBayar_tanpaPajak += totalHarga_berdasarkanJenis[i];
	}
	harga_pajak = totalBayar_tanpaPajak * pajak;
	totalBayar_denganPajak = totalBayar_tanpaPajak + harga_pajak;
	
	// Tampilan output
	cout << "---------------------------------------------------------\n";
	cout << "\t\tGEROBAK FRIED CHICKEN\n";
	cout << "---------------------------------------------------------\n";
	cout << "No.\tJenis\t\tHarga\tBanyak\tJumlah\n";
	cout << "\tPotong\t\tSatuan\tBeli\tHarga\n";
	cout << "---------------------------------------------------------\n";
	for (int i = 0; i < 3; i++)
	{
		if (totalBanyakPotong[i] == 0){continue;}
		cout << i + 1 << ".\t" << kode_jenis[i] << "\t\t" << harga_satuan[i] << '\t' << totalBanyakPotong[i] << "\tRp. " << totalHarga_berdasarkanJenis[i] << endl;
	}
	cout << "---------------------------------------------------------\n";
	cout << "\t\t\tJumlah Bayar\tRp. " << totalBayar_tanpaPajak << endl;
	cout << "\t\t\tPajak 10%\tRp. " << harga_pajak << endl;
	cout << "\t\t\tTotal Bayar\tRp. " << totalBayar_denganPajak << endl;
	cout << "---------------------------------------------------------\n";
	
	return 0;
}
