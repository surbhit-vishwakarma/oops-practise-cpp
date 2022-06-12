#include <iostream>
using namespace std;

// Binding together the  data and functions that can manipulate those data in a single unit is known as encapsualtion
class Base
{
    int x;
public:
    void setX(int p)
    {
        x = p;
    }

    int getX()
    {
        return x;
    }
};

int main()
{
    Base b1;
    cout << b1.getX() << endl;

    b1.setX(69);
    cout << b1.getX() << endl;
}
