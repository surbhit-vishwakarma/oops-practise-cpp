#include <iostream>

using namespace std;

class Base{
    int x;
    int y;
public:
    Base(int x)
    :x{x},y{x}
    {
    }

    void print(){ cout << x << " " << y << endl;  }
};
int main()
{
    Base b(10);
    b.print();

    return 0;
}
