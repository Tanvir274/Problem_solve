#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i,j,temp=0, arr[n],arr1[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        arr1[i]=arr[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr1[j]>arr1[j+1])
            {
                temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;

            }

        }
    }

    for(i=0;i<n;i++)
    {
        int k=arr1[i];
        for(j=0;j<n;j++)
        {
            if(arr[j]==k)
            {
                cout<<j+1<<" ";

            }

        }
    }

    cout<<endl;
    return main();





}
