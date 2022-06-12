#include <bits/stdc++.h>
using namespace std;

union Nums{
    int a;
    double b;
    float c;
};
int main()
{
    Nums n;
    n.b = 8;
    cout << n.b <<endl;
    cout << n.a <<endl;
    cout << n.c <<endl;
    cout << sizeof(n) <<endl;
}
