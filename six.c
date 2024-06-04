// WAP  using c to find Binomial coefficients

#include <stdio.h>
// function for binomial coefficients
int binTable(int val)
{
    for (int i = 0; i <= val; i++)
    {
        printf("%2d ", i);
        int num = 1;
        for (int j = 0; j <= i; j++)
        {
            if (i != 0 && j != i)
            {
                num = num * (i - j) / (j + 1);
            }
            printf("%2d ", num);
        }
        printf("\n");
    }
}

int main()
{
    int val = 5;
    binTable(val);
    return 0;
}