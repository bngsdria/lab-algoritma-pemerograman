#include <stdio.h>
using namespace std;

int main()
{
    int sum = 0;
    for (int i = 0; i <= 10; i++)
    {
        sum += 1;
        if (i == 5)
        {
            goto addition;
        }   
    }

    addition:
        printf("%d", sum);

    return 0;
}