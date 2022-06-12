#include <iostream>
using namespace std;

class Test
{
    int *p;
public:
    Test(int x = 0):p{new int(x)} {}

    void printX()
    {
        cout << p << " for " <<this<< " Where val: "<< *p<<  endl;
    }

    Test& operator = (const Test &rhs)
    {
        if(this != &rhs)
        {
            *p = *rhs.p;
            return *this;
        }
    }
    ~Test()
    {
        delete p;
        cout << "Destructor called for :" << this << endl;
    }
};

int main()
{
    Test t(12);
    Test t1(13);

    t = t1;
    t.printX();
    t1.printX();

    return 0;
}
