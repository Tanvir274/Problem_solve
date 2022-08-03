#include<iostream>
using namespace std;

void countingsort(int A[],int n,int B[],int k)
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
    int n,i,f;
    cout<<"How many data you sorted ? :";
    cin>>n;

    int A[n];
    int B[n];
    cout<<endl<<"Enter your data: ";
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<endl<<"Write your highest value :";
    cin>>f;
    int k=f+1;


    countingsort(A,n,B,k);

    cout<<endl<<"Sorted list:";

    for(int i=0;i<n;i++)
    {
        cout<<"->"<<B[i];
    }
    cout<<endl;
}
