#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i,result=0,add=0,
    arr[15]={1,1,0,0,0,1,1,1,0,0,1,1,1,1,0};


    cout<<endl<<"Most mutual 1: ";

    for(i=0;i<15;i++)
    {
        if(arr[i]==1)
        {
          add++;
        }
        else
        {
           if(result<add)
           {
               result=add;
               add=0;
           }
        }
    }
    cout<<result;

    getch();

}
