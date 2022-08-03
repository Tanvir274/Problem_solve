#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (auto &x : a)
            cin >> x;
        set<int> s(a, a + n);

        int d = n - s.size();
        cout << s.size() - (d & 1) << endl;
    }
}
/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,l,count=0;
    cin>>t;

    while(t--)
    {

        cin>>l;

        int arr[l];

        for(int x=0;x<l;x++)
        {
            cin>>arr[x];
        }
        sort(arr,arr+l);

        for(int i=0;i<l-1;i++)
        {
            if(arr[i]==arr[i+1])
            {

                count++;

            }
        }





        cout<<endl<<l-count<<endl;
        count=0;

    }
}
*/
