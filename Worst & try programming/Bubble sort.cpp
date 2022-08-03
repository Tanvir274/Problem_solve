#include<iostream>
using namespace std;

int main()
{
    int a[10] ,i,n;
    cout<<"How many data you enter : ";
    cin>>n;
    cout<<"Enter your data : ";

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int pass=1;i<n;pass++)
    {
        for(i=1;i<(n-1);i++)
        {
            if(a[i+1]>a[i])
            {
                int chan;
                chan=a[i];
                a[i]=a[i+1];
                a[i+1]=chan;
            }
        }


    }
cout<<"sorted data: ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
}
