#include <iostream>
using namespace std;


//Virtual keywords solves diamond problem :)

class Human
{
public:
    void speaks()
    {
        cout << "Hello" << endl;
    }
};

class Footballer : public virtual Human
{
public:
    void plays()
    {
        cout << "Plays and loves football SUIIIIIIII" <<endl;
    }
};

class Engineer: public virtual Human
{
public:
    void studies()
    {
        cout << "Is a CSE student" << endl;
    }
};

class Surbhit : public Footballer, public Engineer
{
public:
    void sayS()
    {
        speaks();
        cout << "My name is Surbhit "<<endl;
        plays();
        studies();
    }
};


int main()
{
    Surbhit S;
    S.sayS();

    return 0;
}
