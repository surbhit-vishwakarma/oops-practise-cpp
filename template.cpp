#include <iostream>
using namespace std;
//Function Template Basics :-

/*
syntax :-
template<class T1, class t2>
Return type func_name( Type of first parameter, type of second parameter)
{
    function body..
}
Note :- we can use class or typename.

if we use auto keyword in place of return_type than compiler automatically deduced the
    return type according to the solution.
*/
template <class T1,class T2>
auto getMax(T1 x, T2 y)
{
    return x > y ? x : y ;
}

int main()
{
    double a = 4.1  ; int b = 3;
    cout << getMax<int>(a,b) << endl;

    char a1 = 'a' , b1 = 's';
    cout << getMax(a1,b1) << endl;

    float ai = 122.22 , bi = 23.2;
    cout << getMax(ai,bi);

    return 0;
}
