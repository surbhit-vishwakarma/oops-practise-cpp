// Polymorphism :- poly means many and morph means form.
// There are two types of polymorphism
//1) Compile time :- Consist of Function and operator overloading
//2) Run Time :- Consist of function overriding.

// We will learn only function overriding as compile time is already learned.

#include <iostream>
using namespace std;

class Base
{
public:
    virtual void fun(int x)
    {
        cout << "Base class " <<endl;
    }
};
class Derived: public Base
{
public:
    void fun(int y) override
    {
        cout << "Derived Class" <<endl;
    }
};
// Conclusions :- 1) if we don't write virtual keyword before fun() in base class then
//                  it will call base class function and if we write then it will call
//                  derived class fun() function
//                 2) If we use different parameters types then the function is completely
//                  different hence we cant override them
int main()
{
    Base *b = new Derived();
    b->fun(1);

    return 0;
}
