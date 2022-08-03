#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int arr[n];
        

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }


        for(int i=0;i<n;i++)
        {
            int l;
            while(l--)
            {
                char ch;
                cin>>ch;

                if(ch=='D')
                {
                    if(arr[i]==9)
                    {
                        arr[i]=0;
                    }
                    else
                    {
                        arr[i]++;
                    }
                }
                if(ch=='U')
                {
                    if(arr[i]==0)
                    {
                        arr[i]=9;
                    }
                    else
                    {
                        arr[i]--;
                    }

                }
            }

        }

       

       for(int i=0;i<n;i++)
       {
        cout<<arr[i]<<"\t";
       } 
       cout<<endl;



        

    }
}