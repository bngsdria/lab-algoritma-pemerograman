/* ---------------------------- */
/* Program dengan pernyatan goto */
/* ---------------------------- */
#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    int a, b;
    char lagi;
    atas:
    //clrscr();
    cout << "Masukkan bilangan = ";
    cin >> a;
    b = a % 2;
    printf("Nilai %d %% 2 adalah = %d", a, b);
    printf("\n\nIngin HItung Lagi [Y/T] : ");
    lagi = getch();
    if (lagi == 'Y' || lagi == 'y')
    {
    	cout << endl;
    	goto atas;
	}
	else if(lagi == 'T' || lagi == 't')
	{
		return 0;
	}
}
