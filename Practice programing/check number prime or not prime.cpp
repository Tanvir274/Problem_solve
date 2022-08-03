#include<iostream>
using namespace std;

int main()
{
    int n,m=0;

    cout<<"Enter your number : ";
    cin>>n;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
          cout<<"This Number is not prime";
          m=1;
          break;
        }

    }
        if(m==0)
         {
          if(n<2)
          {
            cout<<"This Number is not prime";
          }
          else
          {
            cout<<"This Number is  prime";
          }
         }

       cout<<endl<<endl;
       return main();

}
