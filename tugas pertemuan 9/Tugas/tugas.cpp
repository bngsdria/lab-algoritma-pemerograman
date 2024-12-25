#include <iostream>
using namespace std;
const float pi = 3.14;
const int total_repeat = 2;

float luasPersegi(float sisi);
float luasPersegiPanjang(float panjang, float lebar);
float luasTabung(float radius, float tinggi);
float volumeTabung(float radius, float tinggi);
void buatGaris(int jumlahGaris, char pembentuk);

int main()
{
	float sisi, panjang, lebar, radius, tinggi;
	for (int i = 0; i < total_repeat; i++)
	{
		buatGaris(30, '-');
		cout << "Perhitungan Luas Persegi\n";
		cout << "Masukkan panjang sisi\t= ";
		cin >> sisi;

		cout << "Luas Persegi\t= sisi x sisi\n";
		cout << "Luas Persegi\t= " << sisi << " x " << sisi << endl;
		cout << "Luas Persegi\t= " << luasPersegi(sisi) << endl;
	}

	for (int i = 0; i < total_repeat; i++)
	{
		buatGaris(30, '-');
		cout << "Perhitungan Luas Persegi Panjang\n";
		cout << "Masukkan panjang\t= ";
		cin >> panjang;
		cout << "Masukkan lebar\t\t= ";
		cin >> lebar;

		cout << "Luas Persegi Panjang\t= panjang x lebar\n";
		cout << "Luas Persegi Panjang\t= " << panjang << " x " << lebar << endl;
		cout << "Luas Persegi Panjang\t= " << luasPersegiPanjang(panjang, lebar) << endl;
	}

	for (int i = 0; i < total_repeat; i++)
	{
		buatGaris(30, '-');
		cout << "Perhitungan Luas Tabung\n";
		cout << "Masukkan radius\t= ";
		cin >> radius;
		cout << "Masukkan tinggi\t= ";
		cin >> tinggi;

		cout << "Luas Tabung\t= 2 x pi x r x tinggi\n";
		cout << "Luas Tabung\t= 2 x " << pi << " x " << radius  << " x " << tinggi << endl;
		cout << "Luas Tabung\t= " << luasTabung(radius, tinggi) << endl;
	}

	for (int i = 0; i < total_repeat; i++)
	{
		buatGaris(30, '-');
		cout << "Perhitungan Volume Tabung\n";
		cout << "Masukkan radius\t= ";
		cin >> radius;
		cout << "Masukkan tinggi\t= ";
		cin >> tinggi;

		cout << "Volume Tabung\t= pi x r^2 x tinggi\n";
		cout << "Volume Tabung\t= " << pi << " x " << radius << "^2 x " << tinggi << endl;
		cout << "Volume Tabung\t= " << volumeTabung(radius, tinggi) << endl;
	}

	return 0;
}

float luasPersegi(float sisi)
{
	return sisi * sisi;
}

float luasPersegiPanjang(float panjang, float lebar)
{
	return panjang * lebar;
}

float luasTabung(float radius, float tinggi)
{
	return 2 * pi * radius * tinggi;
}

float volumeTabung(float radius, float tinggi)
{
	return pi * radius * radius * tinggi;
}

void buatGaris(int jumlahGaris, char pembentuk)
{
	for(int i = 0; i < jumlahGaris; i++)
	{
		cout << pembentuk;
	}
	cout << endl;
}