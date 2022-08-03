#include<iostream>
using namespace std;

int main()
{
    int t,fi=0,se=0,th=0;
    cin>>t;
    int arr[t];

    for(int i =0;i<t;i++)
    {
        cin>>arr[i];
    }

    for(int i =0;i<t;i++)
    {
       if(arr[i]%3==0)
       {
           fi=(arr[i]/3)+1;
           se=arr[i]/3;
           th=(arr[i]/3)-1;
       }
       else if(arr[i]%3!=0)
       {
           fi=(arr[i]/3)+arr[i]%3;
           se=((arr[i]-fi)/2)+1;
           th=arr[i]-fi-se;
           if(fi==se && th>1)
           {
               fi=fi+1;
               th=th-1;
           }
           else if(fi==se)
           {
               fi=fi+1;
               se=se-1;
           }
           

       }

       cout<<se<<" "<<fi<<" "<<th<<endl;
        
    }
}