#include<iostream>
using namespace std;

int main()
{
    int i,Oi=-1,Ei=-1,Co=0,Ce=0, n;

    cin>>n;

    int arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            Ce++;
            if(Ei==-1)
            {
                Ei=i+1;
            }
        }
        if(arr[i]%2!=0)
        {
            Co++;
            if(Oi==-1)
            {
                Oi=i+1;
            }

        }
        
    }

    if(Ce>=Co)
    {
        cout<<Oi;
    }
    else
    {
        cout<<Ei;
    }

    cout<<endl;
    return main();
}