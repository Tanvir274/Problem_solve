#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,c=0;
    string str;
    cin>>str;
    char ch;
   transform(str.begin(), str.end(), str.begin(), ::tolower);

   for(i = 0; i < str.length(); i++)
  	{
  		for(int j = i + 1; str[j] != '\0'; j++)
  		{
  			if(str[i]==str[j])
			{
  				str[j]='\0';
  				c++;
 			}
		}
        if(c>=1)
        {
            str[i]='\0';
            c=0;
        }
	}
   for(i=0;i<str.length();i++)
   {
      if(!((str[i] == 'a') ||(str[i] =='e') ||(str[i] =='i') ||
          (str[i] =='o')||(str[i]=='\0')))
      {
          ch=str[i];
          cout<<"."<<ch;
      }
   }
   return main();
}
