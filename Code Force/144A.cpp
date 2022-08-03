#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n],i,min=110,min_index=0,max=0,max_index=0;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            max_index=i;
        }
        if(arr[i]<=min)
        {
            min=arr[i];
            min_index=i;
        }

    }

    

    if(max_index>min_index)
    {
        min_index++;
        cout<<max_index+(n-1)-min_index;
        
    }
    else
    {
        cout<<max_index+(n-1)-min_index;

    }
    cout<<endl;
    return main();

}
