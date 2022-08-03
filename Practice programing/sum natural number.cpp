#include<iostream>

using namespace std;

int main()
{
    int n,sum=0;;
    cout<<"Enter your number for sum : ";
    cin>>n;
    cout<<"Natural number 0 to "<<n<<" :"<<endl;
    for(int i=0; i<=n;i++)
    {
        cout<<i<<"  ";

        sum=sum+i;
    }
    cout<<endl<<"Total sum : "<<sum;
    cout<<endl;
    return main();

}
