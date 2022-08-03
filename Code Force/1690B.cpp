#include <iostream>
 
using namespace std;
 
int main()
{
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int a[n],b[n];
	int c = 0;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++) cin>>b[i] , c = max(a[i]-b[i],c) ;
	bool x = true;
	for(int i=0;i<n;i++){
		if(a[i] - b[i] != c && b[i]!=0){
			x=false;
			break;
		}
	}
	if(x==true) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	}}




/*#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,t1;
    cin>>t;
    int arr[t]={0};

    for(int i=0;i<t;i++)
    {
        cin>>t1;
        int arrA[t1],arrB[t1];
        for(int j=0;j<t1;j++)
        {
            cin>>arrA[j];
            if(arrA[j]==0)
            {
                arr[i]=1;
            }
        }
        for(int j=0;j<t1;j++)
        {
            cin>>arrB[j];
            if(arrB[j]==0)
            {
                arr[i]=1;
            }
        }


    }

    for(int i=0;i<t;i++)
    {
        if(arr[i]==1)
        {
             cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;

        }
    }
}
*/