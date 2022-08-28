#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string up="";
        string down="";
        char ch;
        cin>>up;
        cin>>down;
        int ans=0;
        string str=up+down;

        set<char>s;

        for(int i=0;i<4;i++)
        {
            s.insert(str[i]);

        }

        cout<<s.size()-1<<endl;
        
    }
    

}