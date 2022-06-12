#include <iostream>
using namespace std;

class Point
{
    int x ;
    int y ;

public:
    Point(int x = 0 , int y = 0): x{x},y{y} {}

    Point operator - ()
    {
        return Point(-x,-y);
    }

    void printVal()
    {
        cout << "x: " << x << " y: " << y << endl;
    }
};

int main()
{
    Point p(1,2);
    p.printVal();

    Point p2 = -p;
    p2.printVal();

    return 0;
}
