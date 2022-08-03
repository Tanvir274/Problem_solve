#include<iostream>
using namespace std;

partition(int arr[],int first,int last)
{
    int pivot=arr[last];
    int i=first-1;

    for(int j=first;j<last;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            int term=arr[i];
            arr[i]=arr[j];
            arr[j]=arr[i];
        }
    }
    int term=arr[last];
    arr[last]=arr[i+1];
    arr[i+1]=term;
    return i+1;
}

quick_sort(int arr[],int first,int last)
{
    if(first<last)
    {
        int mid=partition(arr,first,last);
        quick_sort(arr,first,mid-1);
        quick_sort(arr,mid+1,last);
    }
}

int main()
{
    int n,i;
    cout<<"How many data sorted: ";
    cin>>n;
    int arr[n];
    cout<<"enter data:  ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quick_sort(arr,0,n-1);
    cout<<"sorted data: ";

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
}
