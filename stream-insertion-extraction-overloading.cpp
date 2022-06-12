#include <iostream>
using namespace std;


class Test
{
    int x;
    int z;
public:
    Test() {}
    friend ostream& operator << (ostream &output, Test &obj);
    friend istream& operator >> (istream &input, Test &obj);
};

ostream& operator << (ostream &output, Test &obj)
{
    output << obj.x << obj.z << endl;
    return output ;
}

istream& operator >> (istream &input, Test &obj)
{
    input >> obj.x >> obj.z ;
    return input ;
}
int main()
{
    Test t;
    cin >> t;
    cout << t;

    return 0;
}
