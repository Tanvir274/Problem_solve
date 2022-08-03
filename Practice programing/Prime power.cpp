#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int n ;
    cout <<"Enter the number: ";
    cin>>n;

    int cal=n/2,arr[cal],limit=sqrt(cal)+1;

    for(int i=4;i<=cal;i+=2)
    {
        arr[i]=1;
    }
    for(int i=3;i<=cal;i+=2)
    {
        if(!arr[i])
        {
            if(i<=limit)
            {
                for(int j=i*i;j<=cal;j+=i*2)
                {
                    arr[j]=1;
                }
            }
        }
    }
    cout<<"Dividable prime number : ";

    for(int i=2;i<=cal;i++)
    {
        if(arr[i]!=1)
        {
            if(n%i==0)
            {
                cout<<i<<" ";
            }

        }

    }
    cout<<endl<<endl;

    return main();


}
