#include<iostream>
using namespace std;

#define unvisited -1
#define marked 0
#define visited 1
#define CONNECTED 1
#define DISCONNECTED 0
#define SIZE 100

int graph[SIZE+1][SIZE+1], label[SIZE+1];

int queue[SIZE], head, tail;

int nodes, edges;
void initialize_queue()
{
	head = tail = 0;
}

void enqueue(int node)
{
	queue[tail++] = node;
}

int dequeue()
{
	return queue[head++];
}

bool queue_empty()
{
	return head == tail;
}

void BFS(int source, int nodes)
{
	for(int i=1; i<=nodes; i++)
		label[i] = unvisited;
	enqueue(source);
	label[source] = marked;
	while(!queue_empty())
	{
		int vn = dequeue();
		cout<< vn<< " ";
		for(int v=1; v<=nodes; v++)
		{
			if(graph[vn][v] == CONNECTED)
			{
				if(label[v] == unvisited)
				{
					label[v] = marked;
					enqueue(v);
			}
		}
		label[vn] = visited;
	}
	cout<<endl;
}
}


int main( )
{
    int x, y, source;
	cout<<"No. of nodes: ";
	cin>>nodes;
	for(int i=1; i<=nodes; i++)
    {
       for(int j=1; j<=nodes; j++)
       {
           graph[i][j] = DISCONNECTED;
       }

    }
	cout<<"No. of edges: ";
	cin>>edges;
	for(int i=1; i<=edges; i++)
	{
		cout<<"Enter vertes x and y for edge: "<< i;
		cin>>x >>y;
		graph[x][y] = graph[y][x] = CONNECTED;
	}
	initialize_queue();
	cout<<"Give source:" ;  cin>>source;
	BFS(source, nodes);
		return 0;

}
