#include <bits/stdc++.h>
using namespace std;

//This is used to make our template to work differently for different data type.

template <typename T>
T addNum(vector<T> num)
{
    T cnt = 0;
    for(auto elem : num)
    {
        cnt += elem;
    }

    return cnt;
}
template<>
string addNum(vector<string> num)
{
    int cnt = 0 ;
    for(string res : num)
    {
        for(auto x : res)
        {
            cnt += x;
        }
    }

    string res = to_string(cnt);
    return res;
}
int main()
{
    vector<int> v = {1,2,3,4,5};
    vector<double> v1 = {1.0,2.0,3.3,4.1,5.3};
    vector<string> v2 = {"abc"};
    cout << addNum(v) << endl;
    cout << addNum(v1) << endl;
    cout << addNum(v2) << endl;

    return 0;
}
