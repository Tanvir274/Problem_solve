#include<iostream>
using namespace std;
int main()
{
    int i,id,c,q;
    cout<<"How many contest :";
    cin>>c;
    cout<<"How many question:";
    cin>>q;
    int a[c];
    for(i=0;i<10;i++)
    {
        a[i]=0;
    }
    cout<<"Enter right ans contest id :";
    for(i=0;i<20;i++)
    {
        cin>>id;
        a[id-1]++;
    }
    int maximum_score=0;

    for(i=0;i<10;i++)
    {
        if(maximum_score<a[i])
        {
            maximum_score=a[i];
        }
    }

    cout<<"winner id : ";

    for(i=0;i<10;i++)
    {
        if(maximum_score==a[i])
        {
            cout<<i+1;
        }
    }

}
