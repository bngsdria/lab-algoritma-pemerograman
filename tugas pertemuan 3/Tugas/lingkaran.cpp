#include <iostream>
using namespace std;
#define PI 3.1415926535 //... Mendefinisikan bahwa nilai (value) dari PI adalah 3.1415926535

int main()
{
	float radius, luasLingkaran, volumeTabung, height; //... Deklarasi variable radius, luasLingkaran, volumeTabung, dan height dengan data int
	
	//... Input radius & tinggi
	cout << "Masukkan nilai radius: ";
	cin >> radius;
	cout << "Masukkan nilai tinggi tabung: ";
	cin >> height;
	
	//... Proses perhitungan untuk Luas Lingkaran dan Volume Tabung
	luasLingkaran = PI * (radius * radius); //... Menghitung luas lingkaran dengan rumus (pi * r^2)
	volumeTabung = luasLingkaran * height; //... Menghitung volume tabung dengan rumus (L alas * t)
	
	//... Output dari data perhitungan Luas Lingkaran
	cout << "----------------- Menghitung luas ligkaran -----------------" << endl;
	cout << "Radius\t= " << radius << endl;
	cout << "Pi\t= " << PI << endl;
	cout << "Luas\t= Pi x r x r" << endl;
	cout << "Luas\t= " << PI << " x " << radius << " x " << radius << endl;
	cout << "Luas\t= " << luasLingkaran << endl;
	cout << "Luas Lingkaran dengan radius " << radius << "cm adalah " << luasLingkaran << "cm" << endl;
	cout << "------------------------------------------------------------\n" << endl;
	
	//... Output dari data perhitungan Volume Tabung
	cout << "----------------- Menghitung volume tabung -----------------" << endl;
	cout << "Radius\t\t= " << radius << endl;
	cout << "Tinggi\t\t= " << height << endl;
	cout << "Pi\t\t= " << PI << endl;
	cout << "Luas lingkaran\t= " << luasLingkaran << endl;
	cout << "Volume\t\t= Pi x r x r x t atau\n\t\t  Luas Alas x Tinggi" << endl;
	cout << "Volume\t\t= " << luasLingkaran << " x " << height << endl;
	cout << "Volume\t\t= " << volumeTabung << endl;
	cout << "Volume tabung dengan radius " << radius << "cm dan tinggi " << height << "cm adalah " << volumeTabung << "cm" << endl;
	cout << "------------------------------------------------------------" << endl;

	return 0;
}