#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int i,count=0;
    getline(cin, s);

    sort(s.begin(), s.end());

    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            if(s[i] != s[i-1])
            {
                count++;
                

            }
            

        }

    }
    cout<<count;

}