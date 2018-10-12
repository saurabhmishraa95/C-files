#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
  
    int node,edge,x,y;
    cout<<"Enter no of nodes and edges\n";
    cin>>node>>edge;
    queue<int> q;
    vector<bool> visited(node,false);
    vector<int> adj[node];
    int dist[node];
    for(int i=0;i<node;i++)
    dist[i]=0;
    while(edge--)
    {
    	cout<<"Enter edge\n";
        cin>>x>>y;
        x--;y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cout<<"Enter start node\n";
    int s;
    cin>>s;
    s--;
    q.push(s);
    visited[s]=true;
    while(!q.empty())
    {
        int r=q.front();
        q.pop();
        for(int i=0;i<adj[r].size();i++)
        {
            if(visited[adj[r][i]]==false)
            {
                visited[adj[r][i]]=true;
                q.push(adj[r][i]);
                dist[adj[r][i]]=dist[r]+1;
            
            }
        }
    }
    for(int i=0;i<node;i++)
    {
    	//cout<<dist[i]<<"  ";
       if(i!=s)
            if(dist[i]!=0)
                cout<<dist[i]<<" ";
            else
                cout<<"-1"<<" ";
    }
    
    return 0;
}

