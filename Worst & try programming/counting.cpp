#include<iostream>
using namespace std;

countingsort(int A[],int n,int B[],int k)
{
    int i,j,C[k];

    for(i=0;i<k;i++)
    {
        C[i]=0;
    }
    for(j=0;j<n;j++)
    {
        C[A[j]]=C[A[j]]+1;
    }
    for(i=1;i<k;i++)
    {
        C[i]=C[i]+C[i-1];
    }
    for(j=n-1;j>=0;j--)
    {
        B[C[A[j]]-1]=A[j];
        C[A[j]]=C[A[j]]-1;
    }
}

int main()
{
    int i,n,f;
    cout<<"How many data sort : ";
    cin>>n;
    int A[n],B[n];
    cout<<"Enter data:";

    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter your highest value : ";
    cin>>f;
    int k=f+1;

    countingsort(A,n,B,k);

    cout<<"Sorted data:";
    for(int i=0;i<n;i++)
    {
        cout<<B[i]<<"   ";
    }
}
