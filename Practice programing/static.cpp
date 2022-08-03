#include<iostream>
using namespace std;

void demo()
{
    static int x=0;
    cout<<x<<endl;
    x++;
}

int main()
{
    demo();
    demo();
    demo();
    demo();
    demo();
}
