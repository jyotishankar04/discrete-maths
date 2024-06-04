// WAP using C++ to identify keywords such as character, constants, continue using finite state machine

#include <iostream>
using namespace std;
enum state
{
    Integer,
    Character,
    Float,
    Double,
    Void
};

enum state active_state = Void;

void dt1(state)
{
    int A = 4;
    cout << "A is an integer type and holds " << A << " size of A is" << sizeof(A) << " bytes" << endl;
}

void dt2(state)
{
    char B = 'Z';
    cout << "B is a character type and holds " << B << " size of B is" << sizeof(B) << " bytes" << endl;
}

void dt3(state)
{
    float C = 3.14;
    cout << "C is a float type and holds " << C << " size of C is" << sizeof(C) << " bytes" << endl;
}

void dt4(state)
{
    double D = 3.14;
    cout << "D is a double type and holds " << D << " size of D is" << sizeof(D) << " bytes" << endl;
}
int main()
{
    cout << "Choose datatype to view : \n 1. Integer \n 2. Character \n 3.Float \n 4.Double \n " << endl;

    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        active_state = Integer;
        dt1(active_state);
        break;
    case 2:
        active_state = Character;
        dt2(active_state);
        break;
    case 3:
        active_state = Float;
        dt3(active_state);
        break;

    case 4:
        active_state = Double;
        dt4(active_state);
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }
    return 0;
}
