#include<iostream>

using namespace std;
int main()
{
    int n,i;
    cout<<"Enter your number for factor: ";
    cin>>n;
    cout<<"Factor is below :\n";
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<"  ";
        }
    }
    cout<<"\n\n";
}
