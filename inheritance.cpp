#include <iostream>
using namespace std;

// Single level inheritance :-
class Vehicle
{
public:
    void engine()
    {
        cout << "Engine" << endl;
    }
};

class Car : public Vehicle
{
public:
    void whatVehicle()
    {
        cout << "Is a car " << endl;
    }
};

int main()
{
    Car c;
    c.engine();

    return 0;
}
