#include <iostream>
using namespace std;

    int main()
    {
        int n; bool isPrime = true;
        cout << "Masukkan angka untuk di test: ";
        cin >> n;
        if (n <= 1){isPrime = false;}
        for (int i = 2; i < n / 2; i++)
        {
            if (n % i == 0){isPrime = false; break;}
        }
        
        if (isPrime)
        {
            cout << "Angka " << n << " adalah bilangan prima";
        }
        else
        {
            cout << "Angka " << n << " bukan bilangan prima";
        }
    }
