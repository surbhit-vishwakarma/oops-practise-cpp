// attributes are of class not objects when they are static

#include <bits/stdc++.h>

using namespace std;

class Point{
public:
    int x ;
    static int y;

    Point(){};
    Point(int z):x{z}{}


    // non static function can print both static and nonstatic member function / attributes
    void PrintXandY()
    {
        cout << x << " " << y << endl;
    }

    // can only print static attributes as its a static function , it will throw error for non static ones.
    static void PrintY()
    {
        cout << y << endl;
    }
};

//Making space for static variable in the memory
int Point::y;
int main()
{
    Point p1(2),p2(4);
    //p2.y = 21;
    //cout << p1.y << " " << p2.y << endl;
    p1.PrintXandY();
    p2.PrintXandY();
    p1.PrintY();
    return 0;
}
