#include <iostream>
using namespace std;

//this pointer generally holds the value of the object(instance of a class)
// It's a const pointer
// static and friend func doesnt have this pointer


class Base{
    int x ;
public:
    void Set(int x)
    {
        this->x = x;
    }

    void print()
    {
        cout << x << endl;
    }
};

int main()
{
    Base b1;
    b1.Set(5);
    b1.print();

    return 0;
}
