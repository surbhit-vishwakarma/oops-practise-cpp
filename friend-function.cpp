#include <iostream>
using namespace std;


/* //Friend function for functions.
 * class Base
 * {
 *     int x ;
 * public:
 *     Base() :x{66} {}
 *     Base(int x) :x{x}{}
 *
 *     friend void setx(Base & , int);
 *     friend void getx(Base &);
 * };
 *
 * void setx(Base &b, int z )
 * {
 *     b.x = z;
 * }
 *
 * void getx(Base &b)
 * {
 *     cout << b.x << endl;
 * }
 *
 * int main()
 * {
 *     Base b1 = Base(45);
 *     getx(b1);
 *
 *     setx(b1,54);
 *     getx(b1);
 * }
 */

 //Friend Function for a class

 class Base
 {
     int x ;

 public:
    Base(){x = 0;}
    Base(int z): x{z}{}

    friend class SGs;
 };

 class SGs
 {
 public:
    void getVal(Base &b)
    {
        cout << b.x << endl;
    }

    void setVal(Base &b , int k)
    {
        b.x = k;
    }
 };

 int main()
 {
     Base b1 = Base();
     SGs sg1 ;
     sg1.getVal(b1);

     sg1.setVal(b1,22);
     sg1.getVal(b1);

     return 0;
 }
