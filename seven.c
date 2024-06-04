// WAP ussing c to find the permutation and combination result for a given pair of value n and r

#include <stdio.h>
long npr(int, int);
long double fact(int);
int main()
{
    int n, r, ncr(int, int);
    printf("Enter values of n  & r \n");
    scanf("%d%d", &n, &r);
    if (n >= r)
    {
        printf("%dP%d = %ld\n", n, r, npr(n, r));
        printf("%dC%d = %d\n", n, r, ncr(n, r));
    }
    else
    {
        printf("Wrong input\n");
    }
}

long double fact(int p)
{
    long double fact = 1;
    for (int i = 1; i <= p; i++)
    {
        fact *= i;
    }
    return fact;
}

long npr(int n, int r)
{
    return fact(n) / fact(n - r);
}
int ncr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}