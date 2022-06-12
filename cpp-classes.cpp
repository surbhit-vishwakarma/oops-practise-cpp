#include <bits/stdc++.h>

using namespace std;

class Phone
{
    string name;
    string imei_number;
public:
    Phone(string name , string iNum)
    {
        this->name = name;
        imei_number = iNum;
    }

    void getImeiNum()
    {
        cout << "IMEI number for the following " << name << " is " << imei_number << endl;
    }

};

int main()
{
    Phone redmi = Phone("Mi10i", "12456789");
    redmi.getImeiNum();

    Phone samsung = Phone("Note 8 pro", "987654321");
    samsung.getImeiNum();

    return 0;
}
