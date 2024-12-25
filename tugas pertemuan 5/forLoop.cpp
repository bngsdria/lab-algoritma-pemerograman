#include <iostream>
using namespace std;

//int main()
//{
//	int a;
//	for (a = 1; a <= 10; a++)
//	{
//		cout << a;
//	}
//	
//	return 0;
//}
//
//int main()
//{
//	int awal,akhir;
//	cout << "Start from = ";
//	cin >> awal;
//	cout << "End with = ";
//	cin >> akhir;
//	
//	for (int i = awal; i <= akhir; i++)
//	{
//		cout << i << ' ';
//	}
//	
//	return 0;
//}
	
//int main()
//{
//	int a, b;
//	a = 4;
//	b = 3;
//	
//	for (int c = 1; c <= a; c++)
//	{
//		for (int d = 1; d < b; d++)
//		{
//			cout << c;
//		}
//		cout << endl;
//	}
//	return 0;
//}

int main()
{
	int i, j, cek;
	cek = 0;
	for (i = 1; i <= 30; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (i%j == 0)
			{
				cek++;
			}
		}
		
		if (cek < 3)
		{
			cout << i << ' ';
		}
		cek = 0;
	}
	
	return 0;
}
