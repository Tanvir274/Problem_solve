#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int r=0,i, l= str.length();
    for(i=0;i<l;i++)
    {

        if(str[i]=='H' || str[i]=='Q' || str[i]=='9' )
        {
            r=1;
            break;
        }
    }
    if(r==1)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    cout<<endl;
    return main();
}
