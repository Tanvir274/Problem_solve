#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,count=1;
    cin>>n>>m;

    for(int i=1;i<=n;i++)
    {
        if(i%2 !=0)
        {
            for(int j=1;j<=m;j++)
            {
                cout<<"#";
            }
            cout<<endl;
        }
        else if(i%2 ==0 && count==1)
        {
            for(int j=1;j<m;j++)
            {
                cout<<".";
            }
            cout<<"#"<<endl;
            count=2;
        }
        else if(i%2 ==0 && count==2)
        {
            cout<<"#";
            for(int j=1;j<m;j++)
            {
                cout<<".";
            }
            cout<<endl;
            count=1;
        }


    }

    cout<<endl;
    return main();
}