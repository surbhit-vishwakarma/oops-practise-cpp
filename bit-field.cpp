#include <iostream>
using namespace std;

// bitfields area used to minimize the space as required
// suppose 1 can be store in 1 bit field , but if we used as normal unsigned int it will take 4 bytes i.e. 31 bits wasted
class Base
{
    unsigned int x : 1;
    unsigned int y : 2;
    //unsigned int : 0; // This is used to seperate the bit fields explicitly
    unsigned int z : 3;
public:
    //constructor
    Base() {}
    //setters
    void setVal(int a ,int b ,int c)
    {
        x = a;
        y = b;
        z = c;
    }

    //getters
    void getVal()
    {
        cout << x << " - " << y << " - " << z << endl;
    }

};
int main()
{
    Base b1;
    b1.setVal(1,2,3);
    b1.getVal();

    cout << sizeof(Base) << endl;
    return 0;
}
