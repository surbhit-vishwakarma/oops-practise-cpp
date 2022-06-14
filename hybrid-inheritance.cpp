#include <iostream>
using namespace std;

class Male
{
public:
    void whichGender()
    {
        cout << "Is a male "<< endl;
    }
};

class Female
{
public:
    void whichGender()
    {
        cout << "Is a female "<< endl;
    }
};
class Student{
public:
    void Tell()
    {
        cout << "is a student  " << endl;
    }
};


class Boy: public Student, public Male
{
public:
    void BoG()
    {
        cout << "Is a boy "<< endl;
        whichGender();
        Tell();
    }
};

class Girl: public Student, public Female
{
public:
    void BoG()
    {
        cout << "Is a girl "<< endl;
        whichGender();
        Tell();
    }
};


int main()
{
    Boy b;
    b.BoG();

    Girl g;
    g.BoG();

    return 0;
}
