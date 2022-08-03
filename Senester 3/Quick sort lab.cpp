#include<iostream>
using namespace std;

int partition(int arr[],int first,int last)
{
    int pivot=arr[last];
    int i=first-1;
    for(int j=first;j<last;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp=arr[last];
    arr[last]=arr[i+1];
    arr[i+1]=temp;
    return i+1;
}

void quick_sort(int arr[],int first,int last)
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
    int i,n;
    cout<<"How many data you sorted: ";
    cin>>n;
    int arr[n];
    cout<<endl<<"Enter data: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quick_sort(arr,0,n-1);
    cout<<endl<<"sorted arry :";

    for(int i=0;i<n;i++)
    {
        cout<<"->"<<arr[i];
    }
    cout<<endl;
}
