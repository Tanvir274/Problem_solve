#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int output,mod;
        if(n<=2)
        {
            if(n==2)
            {
              output=1;
            }
            else
            {
                output=2;

            }
            
        }
        else if(n%3==0)
        {
            output=n/3;
        }
        else if(n%3!=0)
        {
            
            output=(n/3)+1;

        }
        cout<<output<<endl;
    }

}