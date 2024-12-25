#include <iostream>
using namespace std;

int main()
{
	int a = 5;
	
	//... Post-increment (a++): variable 'a' digunakan dulu, baru ditambah 1
	int b = a++; //... b = 5, a = 6
	
	cout << "Post-increment: " << endl;
	cout << "Nilai a setelah a++: " << a << endl; //... a sekarang 6
	cout << "Nilai b: " << b  << '\n' << endl; //... b Mengambil nilai sebelum a ditambah, jadi b = 5
	
	int c = 5;
	
	// Pre-increment (++c): variabel 'c' ditambah dulu, baru digunakan;
	int d = ++c; //... d = 6, c = 6
	
	cout << "Pre-increment: " << endl;
	cout << "Nilai c setelah ++c: " << c << endl; //... c sekarang 6
	cout << "Nilai d: " << d << endl; //... d mengambil nilai setelah a ditambah, jadi d = 6
	
	return 0;
}
