#include<iostream>
#include<conio.h>
using namespace std;

int A[12];

 void insert(int x)
{
    for(int i=0 ; i<x ; i++)
    {
        cout << "Enter data : "<<endl;
        cin >> A[i];
    }
}


Max_Heapify(int A[],int i,int n)
{
    int temp,largest_index;
    int Left_child =2*i+1;
    int Right_child =2*i+2;
    if(Left_child<n && A[Left_child]>A[i])
        largest_index=Left_child;
    else
        largest_index = i;

    if(Right_child<n && A[Right_child]>A[largest_index])
        largest_index=Right_child;

    if(largest_index != i)
    {
        temp=A[i];
        A[i]= A[largest_index];
        A[largest_index] = temp;

        Max_Heapify(A,largest_index,n);
    }
}

void Build_max_heap(int A[],int length)
{
      for(int i=(length-1)/2;i>=0;i--)
    {
        Max_Heapify(A,i,length);
    }
}

void Display(int length)
{
    for(int i=0;i<length;i++)
    {
        cout << A[i]<< "   ";
    }
}

int main()
{
    int i=0;
    int length;
    cout << "How many data You want to insert ";
    cin>> length;
    insert(length);

    Build_max_heap(A,length);

    cout << endl<< "After max Heap : ";
    Display(length);

    getch();
}
