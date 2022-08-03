#include<iostream>
using namespace std;
int a[10];

void Heapify(int i,int n)
{
    int lin,lar_in;
    int le_ch=(2*i)+1;
    int re_ch=(2*i)+2;
    if(le_ch<n &&a[le_ch]>a[i])
    {
        lar_in=le_ch;
    }
    else
        lar_in=i;
    if(re_ch<n &&a[re_ch]>a[i])
    {
        lar_in=re_ch;
    }
    if(lar_in !=i)
    {
        lin=a[i];
        a[i]=a[lar_in];
        a[lar_in]=lin;
        Heapify(lar_in,n);
    }
}

void out_data(int n)
{
    for( int i=(n/2)-1;i>=0;i--)
    {
        Heapify(i,n);
    }
}
void output(int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
}

int main()
{
    int n;
    cout<<"How many data insert : ";
    cin>>n;
    cout<<"Enter your data: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    out_data(n);
    cout<<"maxheap: ";
    output(n);
}
