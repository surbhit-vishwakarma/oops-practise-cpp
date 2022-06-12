#include <iostream>
using namespace std;

class Phone
{
    const string pname;
public:
    Phone(string str):pname{str}{}

    //This type of intialising also wont work only intializer list can be used to intialise const variable outside a class
    //Phone(string str){pname = str;}

    void getName(){cout << pname << endl ;}

    //We cannot change name of the phone as its  a const variable using any function.
    //void changeName(string str){pname = str;}

};

int main()
{
    Phone p1("Mi10i");
    p1.getName();
    //p1.changeName("Iphone x");

    return 0;
}
