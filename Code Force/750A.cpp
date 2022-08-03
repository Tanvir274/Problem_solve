#include<iostream>
using namespace std;

int main()
{
    int n=0,m=0,output=0;

    cin>>n>>m;

    for(int i=1;i<=n;i++)
    {
        m=m+(i*5);
        if(m<=240)
        {
            output++;
        }
        else if(m>240)
        {
            break;
        }

    }

    cout<<output<<endl;
    return main();

}