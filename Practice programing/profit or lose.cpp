#include<iostream>
using namespace std;

int main()
{
    float sp,cp,profit,loss,pp,lp;

    cout<<"ENTER YOUR COST PRICE: ";
    cin>>cp;

    cout<<"ENTER YOUR SELLING PRICE: ";
    cin>>sp;
    cout<<endl;

    if(sp>cp)
    {
        profit=sp-cp;
        pp=profit/cp;
        cout<<"PROFIT: "<<profit<<endl<<"PARSENTAGE OF PROFIT: "<<pp*100;

    }
    if(sp<cp)
    {
        loss=cp-sp;
        lp=loss/sp;
        cout<<"LOSS :"<<loss<<endl<<"PARSENTAGE OF LOSS: "<<lp*100;
    }
    cout<<endl<<endl<<"@@@@@@@@@@@@@@@@"<<endl<<endl;

    return main();
}
