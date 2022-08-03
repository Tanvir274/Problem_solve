
#include<bits/stdc++.h>

using namespace std;

int main()
{
    
    int l,n,temp,carey=0; 
    
    cin>>n>>l;

    double arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        temp=arr[i];
        int j=i-1;
        while(j>=0 && temp<arr[j])
        {
            arr[j+1]=arr[j];
            j--;
            
        }
        arr[j+1]=temp;

    }

    
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]-arr[i]>carey)
        {
            carey=arr[i+1]-arr[i];

        }
        

    }

    double first= arr[0];
    double result= (double)carey/2;

    result= max(first,result);

    double last= l-arr[n-1];

    result= max(last,result);



    cout<<fixed<<setprecision(10)<<result;

    cout<<endl;

    return main();
}