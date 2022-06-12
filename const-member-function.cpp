#include <iostream>
using namespace std;

//this is used to restrict the manipulation of data member by a function.

class Base
{
   //  int x;
    mutable int x;
public:

    Base() {}
    void setX(int p)
    {
        x = p;
    }

    // here if we write const then it wont allow to change/ manipulate data members,
    // in order to change the data members although we have used const member function we have
    // to used keyword 'mutable'
    void getX() const
    {
        x = 22;
        cout << x << endl;
    }
};

int main()
{
    Base b1;
    b1.setX(69);
    b1.getX();

    return 0 ;
}
