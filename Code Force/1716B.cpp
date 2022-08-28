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

        int temp=n;
        for(int i=1;i<=n;i++)
        {
            int r=n,o=i;
            while(r--)
            {
                if(o<=n)
                {
                    cout<<o<<" ";
                    if(o==n)
                    {
                        o=1;
                    }
                    else
                    {
                        o++;
                    }
                    
                }
                else
                {
                    cout<<o<<" ";
                    o++;

                }

            }

            cout<<endl;
            
        }
    }
}