#include<iostream>
using namespace std;

int main()
{
    int i,j,temp,count=0, arr[4];

    for(i=0;i<4;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<4;i++)
    {
        int select=i;
        for(j=i+1;j<4;j++)
        {
            if(arr[j]<arr[i])
            {
                select=j;
                

            }
 
        }
        if(select !=i)
        {
            temp=arr[select];
            arr[select]=arr[i];
            arr[i]=temp;

        }   

    }
    for(i=0;i<3;i++)
    {
        
        if(arr[i]==arr[i+1])
        {
            count++;
        }
        
      
    }
    cout<<count;
   
}
