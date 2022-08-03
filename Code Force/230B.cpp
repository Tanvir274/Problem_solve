#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[1000000]={0};
    for(int i=2;i<1000000;i++)
    {
        if(arr[i]==0)
        {
            for(int j=2;j*i<1000000;j++)
            {
                arr[j*i]=1;
            }
        }
    

    }
    int n,count=2;
    cin>>n;

    long long int val,sq;

    for(int i=0;i<n;i++)
    {
        cin>>val;

        sq=sqrt(val);
        if(val==1 || val==2)
        {
            cout<<"NO"<<endl;

        }
        else if(sq*sq==val & arr[sq]==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;

        }
    }

    

    return main();

}