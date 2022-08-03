#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        int k, m, s1 = 0, s2 = 0, x;
        cin >> k;
        for (int i = 1; i <= k; i++)
        {
            cin >> x, s1 = max(x, s1);

        }     
        cin >> m;

        for (int i = 1; i <= m; i++)
        {
            cin >> x, s2 = max(x, s2);

        }
        puts(s1 >= s2 ? "Alice" : "Bob");
        puts(s1 > s2 ? "Alice" : "Bob");
    }
}
/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,am=0,bm=0;
    cin>>t;

    int a[t],b[t],arr_a[t][50],arr_b[t][50];

    for(i=0;i<t;i++)
    {
        cin>>a[i];
        for(j=0;j<a[i];j++)
        {
            cin>>arr_a[i][j];

        }
        cin>>b[i];
        for(j=0;j<b[i];j++)
        {
            cin>>arr_b[i][j];

        }
    }
    for(i=0;i<t;i++)
    {
        for(j=0;j<a[i];j++)
        {
            if(arr_a[i][j]>am)
            {
                am=arr_a[i][j];
            }

        }


        for(j=0;j<b[i];j++)
        {
            if(arr_b[i][j]>bm)
            {
                bm=arr_b[i][j];
            }

        }

        if(a[i]>b[i])
        {
            if(am>bm)
            {
                am=0;
                bm=0;
                cout<<"Alice"<<endl<<"Alice"<<endl;

            }
            else if(am==bm)
            {
                am=0;
                bm=0;

                cout<<"Bob"<<endl<<"Alice"<<endl;

            }
            else
            {
                am=0;
                bm=0;

                cout<<"Bob"<<endl<<"Bob"<<endl;

            }

        }
        else if(b[i]>a[i])
        {
            if(am>bm)
            {
                am=0;
                bm=0;

                cout<<"Alice"<<endl<<"Alice"<<endl;

            }
            else if(am==bm)
            {
                am=0;
                bm=0;

                cout<<"Alice"<<endl<<"Bob"<<endl;

            }
            else
            {
                am=0;
                bm=0;

                cout<<"Bob"<<endl<<"Bob"<<endl;


            }

        }
        else if(b[i]==a[i])
        {
            if(am>bm)
            {
                am=0;
                bm=0;

                cout<<"Alice"<<endl<<"Alice"<<endl;

            }
            else
            {
                am=0;
                bm=0;

                cout<<"Bob"<<endl<<"Bob"<<endl;


            }


        }




    }



}*/