#include <iostream>
using namespace std;

int main()
{
	int a;
	for (int i = 1; i < 20; i += 2)
	{
		cout << i << ' ';
		a += i;	
	}
	cout << "= " << a;
	return 0;
}
