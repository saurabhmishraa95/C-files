#include<bits/stdc++.h>
using namespace std;

void DFS(vector<int> adj[],int u,vector<bool> &vis)
{
	vis[u]=true;
	cout<<u+1<<" ";
	for(int i=0;i<adj[u].size();i++)
	{
		if(vis[adj[u][i]]==false)
		  DFS(adj,adj[u][i],vis);
	}
}

void BFS(vector<int> adj[],int u,vector<bool> &visited)
{
	queue <int> q;
	q.push(u);
    visited[u]=true;
	while(!q.empty())
	{
		u=q.front();
		q.pop();
		cout<<u+1<<" ";
		for(int i=0;i<adj[u].size();i++)
		{    
			if(visited[adj[u][i]]==false)
		    {
		    	q.push(adj[u][i]);
		    	visited[adj[u][i]]=true;
			}
		}
		
	}
}

int main()
{
	int node,edge;
	cout<<"Enter no of nodes and edges\n";
	cin>>node>>edge;
	vector<int> adj[node];
	while(edge--)
	{
		int x,y;
		cout<<"Enter edge\n";
		cin>>x>>y;
		x--,y--;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}	
	vector<bool> visited(node,false);
	DFS(adj,0,visited);
	cout<<endl;
	vector<bool> visitedd(node,false);
	BFS(adj,0,visitedd);
	return 0;
}
