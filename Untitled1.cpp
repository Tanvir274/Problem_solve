#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"enter the size of your array: ";
    cin>>size;

    int a[size];
    int b[size];
    int sum[size];

    cout<<"enter your data into 1st array: ";
    for(int i=0;i<size;i++){
        cin>>a[i];
    }

    cout<<"enter your data into 2nd array: ";
    for(int i=0;i<size;i++){
        cin>>b[i];
    }

    cout<<"sum: ";
    for(int i=0;i<size;i++){
        sum[i]=a[i]+b[i];
        cout<<sum[i]<<" ";
    }

}
