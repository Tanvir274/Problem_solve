#include <iostream>
using namespace std;

int main()
{
    int t,temp=0;

    cin >> t;
    int arr[t * 2];

    for (int i = 0; i < t; i++)
    {
        cin >> arr[i*2] >> arr[i*2 + 1];
    }

    for(int i=0;i<t;i++)
    {
       if(arr[i*2] % arr[i*2 + 1] !=0)
       {
           if(arr[i*2] > arr[i*2 + 1])
           {
              temp=arr[i*2] % arr[i*2 + 1];
              cout<<arr[i*2 + 1]-temp<<endl;

           }
           else
           {
               cout<<arr[i*2 + 1]-arr[i*2]<<endl;

           }   
       }
       else
       {
           cout<<0<<endl;

       }
    }
}