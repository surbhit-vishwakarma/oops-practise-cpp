#include <iostream>
using namespace std;

class Gun
{
public:
    void aGun()
    {
        cout << "Is a gun " << endl;
    }
};

class Maverick: public Gun
{
public:
    void which_gun()
    {
        cout << "Is Maverick " << endl;
    }

};

class Magnum: public Gun
{
public:
    void which_gun()
    {
        cout << "Is Maverick " << endl;
    }

};

int main()
{
    Maverick m4;
    Magnum awp;

    awp.aGun();
    awp.which_gun();

    m4.aGun();
    m4.which_gun();

    return 0;
}
