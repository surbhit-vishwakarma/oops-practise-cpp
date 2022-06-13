#include <iostream>
using namespace std;

class Animal
{
public:
    void hasLegs()
    {
        cout << "Has legs" <<endl;
    }

    void hasEyes()
    {
        cout << "Has eyes" << endl;
    }
};

class Dog: public Animal
{
public:
    void speak()
    {
        cout << "Woof Woof"<<endl;
    }
};

class GoldenRetriver : public Dog
{
public:
    void hairs()
    {
        cout << "Has golden furs <3" <<endl;
    }
};

int main()
{
    GoldenRetriver gr;
    gr.hasLegs();
    gr.hasEyes();
    gr.speak();
    gr.hairs();

    return 0;
}
