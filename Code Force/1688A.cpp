#include<bits/stdc++.h>
using namespace std;
 
main(){
	int x, y;
	cin >> x;
	while(cin >> x){
		int y=x&-x;
		if(y==x)y++;
		if(x==1)y++;
		cout<<y<<'\n';
	}
}

/*
Not Accepted
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,y=0,res=0;
    cin>>t;
    int arr[t];

    for(int i=0;i<t;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<t;i++)
    {
        
        while((arr[i] & y)<=0 || (arr[i] ^ y)<=0) 
        {
            y++;
            
        }
        cout<<y<<endl;
        y=0;
  
    }
}

*/