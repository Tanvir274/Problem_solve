#include <bits/stdc++.h>
using namespace std;
int main()
{
    int mat [5][5];
    int i,j,c=0,r=0,cal=0;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>mat[i][j];
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if (mat[i][j]==1)
            {
                c=i+1;
                r=j+1;
                if(c<=3 && r<=3)
                {
                    cal=(3-c)+(3-r);
                }
                if(c<=3 && r>=3)
                {
                   cal=(3-c)+(r-3);
                }
                if(c>=3 && r<=3)
                {
                   cal=(c-3)+(3-r);
                }
                if(c>=3 && r>=3)
                {
                    cal=(c-3)+(r-3);
                }

            }

        }
    }
    cout<<cal;
}
