#include <iostream>
using namespace std;

int main()
{
	int baris;
	int kolom;
	char jenisOperasi;
	
	cout << "Program Operasi Matriks\n";
	
	cout << "Masukkan jumlah baris: ";
	cin >> baris;
	cout << "Masukkan jumlah kolom: ";
	cin >> kolom;

	do {
		cout << "Pilih jenis operasi (input angka):\n(1) Perkalian\n(2) Penjumlahan\n(3) Pengurangan\n";
		cin >> jenisOperasi;
	} while (jenisOperasi != '1' && jenisOperasi != '2' && jenisOperasi != '3');

	int matrixA[baris][kolom];
	int matrixB[baris][kolom];
	
	int data;
	cout << "MATRIX A:\n";
	for (int i = 0; i < baris; i++)
	{
		for (int j = 0; j < kolom; j++)
		{
			cout << "Matrix A[" << i << "][" << j << "] : ";
			cin >> data;
			matrixA[i][j] = data; 
		}
	}

	cout << "\nMATRIX B:\n";
	for (int i = 0; i < baris; i++)
	{
		for (int j = 0; j < kolom; j++)
		{
			cout << "Matrix B[" << i << "][" << j << "] : ";
			cin >> data;
			matrixB[i][j] = data; 
		}
	}

	cout <<"\nTampilan Matrix A:\n";
	for (int i = 0; i < baris; i++)
	{
		for (int j = 0; j < kolom; j++)
		{
			cout << matrixA[i][j] << '\t';
		}
		cout << endl;
	}

	cout <<"\nTampilan Matrix B:\n";
	for (int i = 0; i < baris; i++)
	{
		for (int j = 0; j < kolom; j++)
		{
			cout << matrixB[i][j] << '\t';
		}
		cout << endl;
	}

	if (jenisOperasi == '1')
	{
		cout << "\nHasil Matriks A * Matriks B:\n";
		for (int i = 0; i < baris; i++)
		{
			for (int j = 0; j < kolom; j++)
			{
				cout << matrixA[i][j] * matrixB[i][j] << '\t';
			}
			cout << endl;
		}
	}

	else if(jenisOperasi == '2')
	{
		cout << "\nHasil Matriks A + Matriks B:\n";
		for (int i = 0; i < baris; i++)
		{
			for (int j = 0; j < kolom; j++)
			{
				cout << matrixA[i][j] + matrixB[i][j] << '\t';
			}
			cout << endl;
		}
	}

	else
	{
		cout << "\nHasil Matriks A - Matriks B:\n";
		for (int i = 0; i < baris; i++)
		{
			for (int j = 0; j < kolom; j++)
			{
				cout << matrixA[i][j] - matrixB[i][j] << '\t';
			}
			cout << endl;
		}
	}
	return 0;
}
