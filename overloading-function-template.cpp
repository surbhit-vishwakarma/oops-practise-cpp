#include <iostream>
using namespace std;


int const& max(int const& x,int const& y)
{
    cout << "max (int, int)" <<endl;
    return x > y ? x : y;
}

template <class T>
T const& max(T const& x, T const& y)
{
    cout << "max(t , t)" <<endl;
    return x > y ? x: y;
}

template<class T>
T const& max(T const& a, T const& b, T const& c)
{
    cout << "max(T, T, T)" << endl;
    return max(max(a,b),c);
}

int main()
{
    cout << ::max(1 , 2) << endl;
    cout << ::max(1.2,2.2) << endl;
    cout << ::max(1,2,4) << endl;
}
