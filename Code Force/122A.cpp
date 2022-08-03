#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%4==0 || n%7==0 || n%47==0 || n%74==00 || n%447==0 ||n%474==0
        || n%477==0 || n%744==0 || n%747==0 || n%774==0 )
    {
        cout<<"YES";
    }
    else
    {
      cout<<"NO";
    }
    return main();
}

/*#include<bits/stdc++.h>
using namespace std;
int main(){
int n,f=1;
cin>>n;
if((n%4==0) || (n%7==0)||(n%47==0)||(n%74==0)||(n%444==0)||(n%447==0)||(n%474==0)||(n%477==0))
{
    f=1;
}
else{
    while(n)
    {
        int m=n%10;
        if((m==4)||(m==7))
        {
            f=1;
        }
        else
        {
            f=0;
            break;
        }
         n=n/10;
    }
}
if(f==1)
{
    cout<<"YES";
}
else
    cout<<"NO";

}*/

