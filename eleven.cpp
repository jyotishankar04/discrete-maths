// WAP using c++ to detect whether a number i even or odd using finite state machines

#include <iostream>
using namespace std;

enum states
{
    ODD,
    EVEN,
    undecided,
};

enum states state = undecided;
void odd()
{
    cout << "number is odd" << endl;
}
void even()
{
    cout << "number is even" << endl;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n % 2 == 0)
    {
        state = EVEN;
    }
    else
    {
        state = ODD;
    }

    if (state == EVEN)
    {
        even();
    }
    else
    {
        odd();
    }
    return 0;
}