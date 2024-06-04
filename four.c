// WAP using c to find the power set for a given set.
#include <stdio.h>
#include <math.h>
void printPowerSet(char *set, int setSize)
{
    unsigned int powerSetSize = pow(2, setSize);
    int counter, j;
    for (counter = 0; counter < powerSetSize; counter++)
    {
        for (j = 0; j < setSize; j++)
        {
            if (counter & (1 << j))
            {
                printf("%c", set[j]);
            }
        }
        printf("\n");
    }
}

int main()
{
    char set[] = {'a', 'b', 'c'};
    int setSize = sizeof(set) / sizeof(set[0]);
    printPowerSet(set, setSize);
    return 0;
}