#include <iostream>
using namespace std;

//int main()
//{
//	int nomor[2][3] = {1,4,6,2,3,5}; // jumlah indeks 2x3 = 6
//	//[2] = baris [3] = kolom
//	cout << nomor[1][2];
//	
//	return 0;
//}

int main() {
    const int baris = 2;
    const int kolom = 3;
    int nomor[baris][kolom] = {1, 4, 6, 2, 3, 5};

    for (int a = 0; a < baris; a++) 
	{
        for (int b = 0; b < kolom; b++) 
		{
            cout << nomor[a][b] << ' ';
        }
        cout << endl;
    }

    return 0;
}
