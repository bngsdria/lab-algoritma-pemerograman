#include <iostream>
using namespace std;

void genapGanjil(int &number)
{
	int sisaBagi = number % 2;
	
	if (sisaBagi == 0) cout << number << ' ' << number + 1;
	else cout << number;
}

int main()	
{
	int number, *pNum;
	
	cout << "Input a number: ";
	cin >> number;
	
	pNum = &number;
	
	genapGanjil(*pNum);
	
	return 0;
}
