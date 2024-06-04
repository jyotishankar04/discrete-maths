// WAP using c to calculate the Euclidean distance between two points
#include <stdio.h>
#include <math.h>

float distance(int x1, int y1, int x2, int y2)
{
    return sqrt(((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) * 1.0);
}
int main()
{
    printf("%2f \n", distance(3, 4, 4, 3));
    return 0;
}