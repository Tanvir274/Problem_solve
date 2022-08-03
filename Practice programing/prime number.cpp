#include<iostream>
#include <math.h>
using namespace std;



int main()
{
    int n;
    cout<<"Enter the range for find prime number: ";
    cin>>n;
    //int prime[(n/2)+1],
    int mark[n+1],nprime=0,limit=sqrt(n)+2;
    for(int i=4;i<=n;i+=2)
    {
        mark[i]=1;
    }
    //prime[nprime++]=2;



    for(int i=3;i<=n;i+=2)
    {
      if(!mark[i])
      {
        //prime[nprime++]=i;

        if(i<=limit)
        {
            for(int j=i*i;j<=n;j+=i*2)
            {
                mark[j]=1;
            }
        }


      }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<i<<"="<<mark[i]<<" ";
    }
    cout<<endl<<"Prime number in this range : ";

    for(int i=2;i<=n;i++)
    {
        if(mark[i]!=1)
        {
            nprime++;
            cout<<i<<" ";
        }
    }
    cout<<endl<<"Total prime number in this range :"<<nprime<<endl;


    cout<<endl<<endl;
    return main();

}
