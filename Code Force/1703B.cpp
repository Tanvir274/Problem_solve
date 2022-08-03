#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,res=0,c=0;
        cin>>n;
        string word;
        cin>>word;
        sort(word.begin(), word.end());
        for(int i=0;i<n;i++)
        {
            if(word[i]==word[i+1] && i+1<=n-1)
            {
                c++;

            }
        }
        res=((n-c)*2)+c;
        cout<<res<<endl;
  
    }
}