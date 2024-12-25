#include <iostream>
using namespace std;

int a(int a);
float a(float a);

int main()
{
	float bob = 1.5;
	cout << a(1) << '\n';
	cout << a(bob) << '\n';
	return 0;
}

int a(int a)
{
	return a + 1;
}

float a(float a)
{
	return a + 1.5;
}
