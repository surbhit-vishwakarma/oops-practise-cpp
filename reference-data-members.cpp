#include <iostream>
using namespace std;

//We cannot change private attributes outside a class , only inside function allow us to do so , to overcome we use reference
//class Base
//{
//    int x;
//public:
//    Base(int x):x{x}{}
//
//    void printX(){cout << x << endl;}
//
//    void changeX(int p) {x = p ;}
//};

class RefBase
{
    int &a;
public:
    //only intialiser list can be used to intialise ref variable inside a class.

    RefBase(int &p):a{p}{}

    void printA(){cout << a << endl ;}
};

int main()
{
//    int val = 10 ;
//    Base b1(val);
//    b1.printX();
//
//    val = 39;
//    b1.printX();
//    return 0;

    int val = 10;
    RefBase rb(val);

    rb.printA();

    val = 43 ;
    rb.printA();

    return 0;}
