#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    cout<<"How many data you want sort? :";
    cin>>n;
    int a[n];
    cout<<"Data :";
    for(i=0;i<n;i++)
    {
       cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
        {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        }
    }
    cout<<"Sorted data : ";
    for(i=0;i<n;i++)
    {
       cout<<"->"<<a[i];
    }
    cout<<endl;

}
