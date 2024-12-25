#include <iostream>
using namespace std;

int main()
{
	int a, b, c = 0, d= 0;
	
	cout << "Masukkan nilai A: "; cin >> a;
	cout << "Masukkan nilai B: "; cin >> b;
	
	c = a % b;
	d = a * b;
	
	cout << "Hasil dari a % b: " << c << endl;
	cout << "Hasil dari a * b: " << d << endl;
	
	return 0; 
}
