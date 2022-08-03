#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
   /* int n,targate;
    cout<<"How many value need ? :";
    cin>>n;
    cout<<"Targate value : ";
    cin>>targate;
    int arr[n];
    cout<<"Enter your value : ";
    cin>>arr[n];*/

    int arr[4]={2,7,11,15};



    for(int i=0;i<4;i++)
    {
       if( arr[i] + arr[i+1] ==9)
       {
           cout<<"array["<<i<<","<<i+1<<"]";

       }

   }
   getch();
}
