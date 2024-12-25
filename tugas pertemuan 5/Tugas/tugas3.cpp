	#include <iostream>
using namespace std;

int main()
{
    int baris;
    cout << "Masukkan jumlah baris: ";
    cin >> baris;

    for (int i = 0; i < baris; i++)
    {
        for (int j = 1; j <= baris - i; j++)
        {
            cout << " *";
        }
        for (int k = 1; k <= i*2; k++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= baris - i; j++)
        {
            cout << " *";
        }
        cout << endl;
    }

    for (int i = baris; i > 0; i--)
    {
        for (int j = 1; j <= baris - i + 1;  j++)
        {
            cout << " *";
        }
        for (int k = 1; k <= i*2 - 2; k++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= baris - i + 1;  j++)
        {
            cout << " *";
        }
        cout << endl;
    }
    return 0;
}
