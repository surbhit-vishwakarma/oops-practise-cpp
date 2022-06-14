#include <iostream>
using namespace std;

// a) private members
//class Base{
//    int x ;
//    int y;
//    Base(int x = 0 , int y = 0): x{x} , y{y} {}
//public:
//    void printElements()
//    {
//        cout << "x: " << x << "y: " << y << endl;
//    }
//};

// Case a1:-
// Inheriting Base class as public mode :-
//Conclusion : Since the members are private within base class even if we inherit
// The derived class cant use the members of of base class
//class Derived : public Base
//{
//public:
//    Derived() {}
//};

//case a2 :-
// Inherting base class as protected mode
//Conclusion : same conclusion as case 1
//class Derived : protected Base
//{
//public:
//    Derived() {}
//};

//Case - a3
// Inheriting base class in private mode
// Conclusion : Same conclusion as case 1

//class Derived : private Base
//{
//public:
//    Derived() {}
//};

// -------------------------------------------------------

// b) Protected Members
//
//class Base{
//protected:
//    int x ;
//    int y;
//    Base(int x = 0 , int y = 0): x{x} , y{y} {}
//    void printElements()
//    {
//        cout << "x: " << x << " y: " << y << endl;
//    }
//};
//
//// Case - b1
//// Inheriting Base class in public mode
//// Conclusion : All the members are accessible withing the derived class but if we try to access
//// them outside it wont allow to do so :/ we can only access them using outside  using the derived class
////class Derived: public Base
////{
////public:
////    Derived (int x = 0 , int y = 0 ): Base(x,y) {}
////};
//
//// Case - b2
//// Inheriting the base class in protected mode
//// Conclusion :- data member of base class only accesible within the derived class outside it
//// we cant use them .
////class Derived: protected Base
////{
////public:
////    Derived (int x = 0 , int y = 0 ): Base(x,y) {}
////    void checkeR()
////    {
////        cout << x << " " << y << endl;
////    }
////};
//
//// Case - b3
//// Inheriting the base class in private mode
//// Conclusion :- this makes the data members of base class private within the public class.
//class Derived: Base
//{
//public:
//    Derived (int x = 0 , int y = 0 ): Base(x,y) {}
//    void checkeR()
//    {
//        cout << x << " " << y << endl;
//    }
//
//    void setterX(int val = 0)
//    {
//        x = val;
//    }
//};
//int main(){
//
//    //case - a1
////    Derived d;
////    d.printElement();
//
//    //Case - a2;
////    Derived d1;
////    d1.printElements();
//
//    //Case - a3
////    Derived d1;
////    d1.printElements();
//// -----------------------------------------------------
//
//    //Case - b1
//    //Derived d1(1,2);
//    //cout << d1.x << endl ;
//   // d1.printElements();
//
//    //Case - b2
//    //Derived d1(1,2);
//    //d1.printElements();
//    //d1.checkeR() ;
//
//    //Case - b3
//    //Case - b1
//    Derived d1(1,2);
//    //d1.printElements();
//    d1.setterX(2);
//    d1.checkeR();
//
//    return 0;
//}
/*
TO LEARN HOW THEY BEHAVE CHECK THE BELOW TABLE FOR EASE :-
class Base {
  public:
    int x;
  protected:
    int y;
  private:
    int z;
};

class PublicDerived: public Base {
  // x is public
  // y is protected
  // z is not accessible from PublicDerived
};

class ProtectedDerived: protected Base {
  // x is protected
  // y is protected
  // z is not accessible from ProtectedDerived
};

class PrivateDerived: private Base {
  // x is private
  // y is private
  // z is not accessible from PrivateDerived
};
*/

class A{
private:
    int x;
protected:
    int y;
public:
    int z;
};

class B: public A
{
public:
    B() {}
    void a()
    {
        cout << y <<endl;
    }
};

class C: private B
{
public:
    C() {}
    void prinT()
    {
        cout << z << endl;
    }
};
int main()
{
    C c;
    c.prinT();
//    c.a();

    return 0;
}
