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
/*#include<iostream>
using namespace std;

int main()
{
    int t,temp=1,res=1,output=1;
    cin>>t;

    string str, arr[t];
    int arr1[3];

    for(int i=0;i<t;i++)
    {
        cin>>arr1[i]>>arr[i];

    }
    for(int i=0;i<t;i++)
    {
        str=arr[i];
        
        for(int j=0;j<arr1[i]-1;j++)
        {
            if(str[j]==str[j+1])
            {
                
                temp++;
                if(temp>=res)
                {
                    res=temp;
                }
                
                
            }
            else
            {
               
                    temp=1;



            }

        }
        if(res>output)
        {
            cout<<res<<endl;
            res=1;
        }
        else
        {
            cout<<output<<endl;

        }
        
        
        
    }


}
*/