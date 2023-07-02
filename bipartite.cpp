#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool>visited;
vector<int>col;
bool bipart;

void color(int u , int curr)
{
	if(col[u] != -1 && col[u] != curr)
	{
		bipart = false;
		return;
	}
	col[u] = curr;
	if(visited[u])
	return;
	visited[u] = true;
	for(auto i : adj[u])
	{
		color(i , curr xor 1);
	}
}
int main()
{
	bipart = true;
	int v , e;
	cin >> v>> e;
	adj = vector<vector<int>>(v);
	visited = vector<bool>(v,false);
	col = vector<int>(v,-1);
	for(int i = 0; i < e; i++)
	{
		int x , y;
		cin >> x >> y;

		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	for(int i = 0 ; i < v; i++)
	{
		if(!visited[i])
		color(i,0);
	}

	if(bipart)
	cout <<"Graph is bipartite";
	else
	cout << "Graph is not bipartite";

}