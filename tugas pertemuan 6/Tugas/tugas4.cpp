/* ------------------ */
/* Perulangan FOR dengan break; */
/* ------------------ */
#include <stdio.h>
#include <conio.h>

int main()
{
	int a = 3, b = 2, c = 1, bil;
	// clrscr();
	printf("Bil-A\t| Bil-B | Bil-C\n");
	printf("-----------------------");
	for (bil = 1; bil <= 10; ++bil)
	{
		a+=b; b+=c; c+=2;
		printf("\n%d\t| %d\t| %d", a, b, c);
		if(c == 13)
		{
			break;
		}
	}
	getchar();
}
