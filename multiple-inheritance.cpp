#include <iostream>
using namespace std;

class Footballer{
    int goals ;
public:
    Footballer(int g): goals{g} { cout << "Footballer class inherited" << endl;}
    void whichClass()
    {
        cout << "Footballer class"<<endl;
    }
    void printGoals(){
    cout << "Current Goals: " << goals << endl;}
};

class Engineer
{
    int marks ;
public:
    Engineer(int m): marks{m} {cout << "Engineer class inherited" << endl;}
    void whichClass()
    {
        cout << "Engineer class"<<endl;
    }
};

class Surbhit: public Footballer, public Engineer
{
    public:
        Surbhit(int x,int y): Footballer(x),Engineer(y){cout << "My class"<<endl;}
};

//Since both class has same function that will lead to ambiguity
//To overcome it we use :-
int main()
{
    Surbhit s(10,69);
    s.Footballer::whichClass();
    s.printGoals();

    return 0;
}
