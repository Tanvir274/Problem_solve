    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        int i;
        string str;
        cin>>str;
        char ch;
       transform(str.begin(), str.end(), str.begin(), ::tolower);
       for(i=0;i<str.length();i++)
       {
          if(!((str[i] == 'a') ||(str[i] =='e') ||(str[i] =='i') ||
              (str[i] =='o') ||(str[i] == 'u')||(str[i]=='y')))
          {
              ch=str[i];
              cout<<"."<<ch;
          }
       }
    }
