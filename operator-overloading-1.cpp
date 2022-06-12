#include <iostream>
using namespace std;

class Point
{
    int x , y;
public:
    // Constructor
    Point(int x = 0 , int y = 0): x{x}, y{y} {}

    //+ Operator overloading
    Point operator + (const Point &rhs)
    {
        Point p;

        p.x = x + rhs.x;
        p.y = y + rhs.y;

        return p;
    }

    //- Operator Overloading
    Point operator - (const Point &rhs)
    {
        Point p;

        p.x = x - rhs.x;
        p.y = y - rhs.y;

        return p;
    }

    //Getters
    void printVal()
    {
        cout << "x - " << x << " y - " << y << endl;
    }
};

int main()
{
    Point p1(1,2);
    Point p2(3,4);

    p1.printVal();
    p2.printVal();

    cout << "Adding p1 and p2" << endl;

    Point p3 = p1 + p2;
    p3.printVal();

    cout << "Substracting p1 and p2" << endl;

    Point p4 = p2 - p1;
    p4.printVal();

    return 0;
}
