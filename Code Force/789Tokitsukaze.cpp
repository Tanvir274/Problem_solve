#include<iostream>
using namespace std;

int main()
{
    int n,i,j,l,c=0,operation=0;
    cin>>n;
    int arr[n][n],length[n];

    for(i=0;i<n;i++)
    {
        cin>>l;
        length[c]=l;
        c++;
        for(j=0;j<l;j++)
        {
            cin>>arr[i][j];

        }
    }


    for(i=0;i<n;i++)
    {
        for(j=0;j<length[i]-1;j++)
        {
            if(arr[i][j]==arr[i][j+1])
            {
                operation++;
                arr[i][j]=0;
            }
            else
            {
                if(arr[i][j]>arr[i][j+1])
                {
                    operation++;
                    arr[i][j]=arr[i][j+1];
                }
                else
                {
                    operation++;
                    arr[i][j+1]=arr[i][j];


                }
                operation++;
                arr[i][j]=0;

            }
        }
        cout<<operation;
        operation=0;
        cout<<endl;
    }

    


}