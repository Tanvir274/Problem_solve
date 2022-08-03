#include<iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int count=0, i, l=str.length();

    for(i=0;i<l;i++)
    {
        if(str[i] == '4' || str[i]=='7'  )
        {

            count++; 
            
        }
        
    }
    if(count==4 || count==7)
    {
        cout<<"YES";
    }
    else
    {
      cout<<"NO";
    }
    
}
