#include<iostream>
using namespace std;

void DFS(int v)
{
    int u,colour [v],white,time;
    for(u=1;u<=v;u++)
    {
        colour[u]=white;
        time=0;
    }
    for(u=1;u<=v;u++)
    {
        if( colour[u]==white)
        {
          DFS_visit(u);
        }
    }
}
 void DFS_visit(int u)
{
    int colour[u],grey,time,d[u],p[u],f[u];

    colour[u]=grey;
    time=time+1;
    d[u]=time;
    for(int v=1;v<=u;v++)
    {
        if(colour[v]==white)
        {
            p[v]=u;
            DFS_visit(u);
        }
        else
        {
         colour[u]=black;
        time=time+1;
        f[u]=time;
        }
    }


}

int main()
{
    int n,e,x,y,i,j;


    cout<<"How many nodes want:";
    cin>>n;
    int Graph[n][n];

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {

             Graph [i][j]=0;
        }
    }
    cout<< "Number of edges: ";
    cin>>e;

        for(j=1; j<=e; j++)
        {
            cout<<j<<". Enter your edge X & Y : ";

           cin>> x>>y;
           Graph[x][y]=1;
        }


    cout<< "Adjacency Matrix :"<<endl ;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {

            cout<<Graph[i][j]<<"  ";
        }
        cout<<endl;
    }
DFS (n);
}
