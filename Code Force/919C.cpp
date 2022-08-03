
#include<bits/stdc++.h>

using namespace std;

int mat[2100][2100];
int row[2100][2100];
int col[2100][2100];

int main()

{
    int n,m,k;
    cin>>n>>m>>k;
    char c;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>c;
            if(c=='*')
            {
                mat[i][j]=0;
            }
            else
            {
                mat[i][j]=1;
            }
        }
    }

    /// prefix sum of free seats according to row
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            row[i][j]=row[i][j-1]+mat[i][j];
        }
    }

    /// prefix sum of free seats according to column
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            col[i][j]=col[i][j-1]+mat[j][i];
        }
    }

    /// now counting to the row wise
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=k;j<=m;j++)
        {
            if(row[i][j]-row[i][j-k]==k) ans++;
        }
    }

    /// now counting to the column wise
    for(int i=1;i<=m;i++)
    {
        for(int j=k;j<=n;j++)
        {
            if(col[i][j]-col[i][j-k]==k) ans++;
        }
    }
    
    /// if k is 1 then , it will be counted twice 
    if(k==1) ans=ans/2;
    cout<<ans<<endl;

    return 0;
}