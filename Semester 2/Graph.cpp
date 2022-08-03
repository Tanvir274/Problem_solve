#include<iostream>

using namespace std;

#define CONNECTED 1
#define DISCONNECTED 0

int main()
{
    int nodes, edges, x,y;

    cout<<"How many nodes? "<<endl;
    cin>>nodes;

    int Graph[nodes+1][nodes+1];

    int i,j;
    for( i=1;i<=nodes; i++)
        for( j=1; j<=nodes; j++)
        {
            Graph[i][j]= DISCONNECTED;
        }

    cout<<"How many edges? ";
    cin>>edges;
    for(i=1; i<=edges; i++)
    {
        cout<<"Enter node x and y for edge "<<i<<endl;
        cin>>x>>y;
        Graph[x][y]=Graph[y][x]= CONNECTED;
    }
    cout<<"Adjacent Matrix: "<<endl;
    for( i=1;i<=nodes; i++)
    {
        for( j=1; j<=nodes; j++)
        {
            cout<<Graph[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;

}
