#include <iostream>
using namespace std;

int power(int num, int n)
{
	if (n == 0) return 1;
	else if (n == 1) return num;
	else return num * power(num, n - 1);
}

int main()
{
	int number, pow, result;
	cout << "Input number: ";
	cin >> number;
	
	cout << "Input power: ";
	cin >> pow;
	
	result = power(number, pow);
	
	cout << "Hasil dari " << number << '^' << pow << " = "  << result;
	return 0;
}
