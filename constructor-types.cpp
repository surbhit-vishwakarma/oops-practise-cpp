#include <bits/stdc++.h>

using namespace std;

class Phone{
public:

    long long num;
    string company_name;
    //Default Constructor
    Phone(){
        num = 12345678910;
        company_name = "XYZ";
    }

    // Initializer
    Phone(long long num , string company_name)
    {
        this->num = num;
        this->company_name = company_name;
    }

    //Copy Constructor
    Phone(const Phone &phn)
    {
        num = phn.num;
        company_name = phn.company_name;
    }
};
int main()
{
    Phone p1;
    Phone p2 = p1;
    Phone p3 = Phone(93782138, "Samsung");

    cout << p1.num << " " << p2.num << " " << p3.num;
}
