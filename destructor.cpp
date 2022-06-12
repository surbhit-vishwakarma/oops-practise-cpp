#include <iostream>

using namespace std;

class Base{

public:

    int *x;

    Base() {
        x = nullptr;
        cout << "Default constructor called " << endl;
    }

    Base(int *x)
    {
        this->x = x;
        cout << "Parametrized constructor called " << endl;
    }

    ~Base(){
        delete x;
        cout << "Destructor called" << endl;
    }
};

int main()
{
    Base b = new int(10);
    cout << *(b.x) << endl;
}
