#include<iostream>
using namespace std;

int main()
{
    int bd,bm,by,pd,pm,py,sum=0;;

    cout<<"ENTER YOUR BIRTH DAY (DD:MM:YYYY): ";
    cin>>bd>>bm>>by;

    cout<<"ENTER  PRESENT DAY (DD:MM:YYYY): ";
    cin>>pd>>pm>>py;



   /* for(int i=by; by<=py; by++)
    {
     sum=sum+i;
    }*/

    cout<<"YOUR AGE BY  YEAR:  "<<py-by<<"  Month:  "<<12-bm+pm;

    cout<<endl<<endl;
    return main();

}
