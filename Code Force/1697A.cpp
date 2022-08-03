#include<iostream>
using namespace std;

int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        int v,Out=0;

       cin>>n>>m;
       for(int i=0;i<n;i++)
       {
        cin>>v;
        if(m>=v)
        {
            m=m-v;
        }
        else if(v>m)
        {
            Out=Out+(v-m);
            m=0;
        }
        
       }
       cout<<Out<<endl; 

    }
}