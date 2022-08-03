#include<iostream>

using namespace std;

int main()
{
    auto int x=10;
    {
        auto int x=6;
        {
            auto int x=2;
            cout <<x<<endl;
        }
        cout<<x<<endl;
    }
    cout<<x<<endl;
}
