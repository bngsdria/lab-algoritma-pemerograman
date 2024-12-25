#include <iostream>
using namespace std;
int main()
{
	// inisialisasi variabel
	int x=50;
	
	int a,b,c,d,e;
	
	// proses
	a = x > 5 + 5;
	b = x > 100;
	c = a&&b;
	d = a||b;
	e = !(c);
	
	//output berupa 1 (benar) dan 0 (salah)
	cout << "\nNilai a = x > 5 + 5 = " << a << endl;
	cout << "\nNilai b = x > 100 = " << b << endl;
	cout << "\nNilai c = a&&b = " << c << endl;
	cout << "\nNilai d = a||b = " << d << endl;
	cout << "\nNilai e = !(c) = " << e << endl;
	getchar();
}	
