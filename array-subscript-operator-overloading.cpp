#include <bits/stdc++.h>
using namespace std;

// Array subscript Operator []

class Point
{
    int arr[2];
public:
    Point(int x = 0 , int y = 0) {
        arr[0]= x , arr[1] = y ;
    }

    int& operator [](int pos)
    {
        if(pos == 0)
            return arr[0];
        else if(pos == 1 )
            return arr[1];
        else
        {
            cout << "Out of bound" << endl;
            exit(0);
        }
    }
    void printVal()
    {
        cout << "x: " << arr[0] << " y: " << arr[1] << endl;
    }
};
int main()
{
    Point p(2,3);
    p.printVal();

    p[0] = 22;
    p[1] = 34;
    p[2] = 23;
    p.printVal();

    return 0;
}
