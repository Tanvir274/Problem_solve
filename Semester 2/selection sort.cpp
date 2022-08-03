#include<iostream>
using namespace std;
#define size 10
int a[size];

void sort( int z)
{
    int select ,minindex,minvalue;
    for(select=0; select<z-1 ;select++)
    {
        minindex=select;
        minvalue=a[minindex];

        for(int i=select+1; i<z; i++)
        {
            if(a[i]<minvalue)
            {
                minvalue=a[i];
                minindex=i;
            }
        }
        a[minindex]=a[select];
        a[select]=minvalue;
    }
}

int main()
{
    int i,n;
    cout<<"How many data :";
    cin>>n;
    cout<<"Data: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(n);
     cout<<"Sorted list: ";
     for(i=0; i<n ;i++)
     {
         cout<<a[i]<<" ";
     }
     cout<<endl;
}
