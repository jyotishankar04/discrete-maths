// WAP using C for Tower of hanoi
#include <stdio.h>
void TOH(int n, char x, char y, char z)
{
    if (n > 0)
    {
        TOH(n - 1, x, z, y);
        printf("\n %c to %c", x, y);
        TOH(n - 1, y, x, z);
    }
}

int main()
{
    int n = 3;
    TOH(n, 'A', 'B', 'C');
}