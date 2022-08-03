#include<iostream>
using namespace std;
#define size 10
int a[size];

void start(int x)
{
    int select, minindex,minvalue;

    for(select=0; select<x-1 ;select++)
    {
        minindex=select;
        minvalue=a[select];

        for(int i=select+1; i<x; i++)
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

int Binary_search(int value, int n)
{
    int first=0;
    int last=n-1;
    int middle;
    int position=-1;
    bool found=false;
    while(!found && first<=last)
    {
        position=(first+last)/2;
        if(a[middle]==value)
        {
            found=true;
            position=middle;
        }
        else if(a[middle]>value)
        {
            last=middle-1;
        }
        else{
            first=middle+1;
        }
    return position;
}

int main()
{
    int i;
    int n;
    cout<<"How many data you want :";
    cin>>n;
    cout<<"Data :";
    for(i=0; i<n ;i++)
    {
        cin>>a[i];
    }
    start(n);
    cout<<"sorted data :";
    for(i=0 ;i<n; i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;

    int data;
    int position;

    cout<<"Enter the data you want to position: ";
    cin>>data;
    position=Binary_search(data,n);
    if(position==-1)
    {
        cout<<"Not found ";
    }
    else
    {
        cout<<"Found"<<"  " <<"position:"<<position+1<<endl;
    }
}
