#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    char ch[5];
    int i,c=0,l=str.length();

    for(i=0;i<l;i++)
    {
     
        if(str[i]=='h'|| str[i]=='l' || str[i]=='e' || str[i]=='o')
        {
             if(str[i]=='h' && c==0)
             {
                 ch[c]='h';
                 c++;
             }
             else if(str[i]=='e' && c==1)
             {
                 ch[c]='e';
                 c++;

             }
             else if(str[i]=='l' && c==2)
             {
                 ch[c]='l';
                 c++;

             }
             else if(str[i]=='l' && c==3)
             {
                 ch[c]='l';
                 c++;

             }
             else if(str[i]=='o' && c==4)
             {
                 ch[c]='o';
                 c++;

             }
        }
     
    }
    
    if(ch[0]=='h'&& ch[1]=='e'&& ch[2]=='l'&&ch[3]=='l'&&ch[4]=='o')
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }


}
