#include <iostream>
using namespace std;

int main()
{
	const int PI = 3.14;
	int radius;
	int height;
	float volume;
	
	cout << "Input radius: ";
	cin >> radius;
	cout << "Input height: ";
	cin >> height;
	
	volume = PI * (radius * radius) * height;
	
	cout << "Volume of the circle: " << volume << endl;
	
	return 0;
}
