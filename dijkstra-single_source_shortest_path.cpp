#include <cmath>
#include <cstdio>
#include <vector>
#include <utility>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;

int nextnode(int dist[],int node)
{
	int min=INT_MAX;
	for(int i=0;i<node;i++)
	{
		if(dist[i]<min)
		min=dist[i];
	}
	return min;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
  
    int node,edge,x,y,w;
    cout<<"Enter no of nodes and edges\n";
    cin>>node>>edge;
    queue<int> q;
    int path[node];
    vector<bool> visited(node,false);
    
    vector< pair<int,int> > adj[node];
    
    int dist[node];
    for(int i=0;i<node;i++)
    dist[i]=INT_MAX;
    while(edge--)
    {
    	cout<<"Enter edge and weight\n";
        cin>>x>>y>>w;
        x--;y--;
        adj[x].push_back(make_pair(y,w));
        adj[y].push_back(make_pair(x,w));
    }
    cout<<"Enter start node\n";
    int s;
    cin>>s;
    s--;
    dist[s]=0;
    q.push(s);
    for(int count=0;count<node-1;count++)
    {
        int r=nextnode(dist,node);
        visited[r]=true;
        for(adj::iterator it = VectorOfPairs.begin(); it != VectorOfPairs.end(); it++)
        {
           if(!visited[it->first]&&dist[it->first]>(dist[r]+it->second));
        }
    }
    
    
    return 0;
}
