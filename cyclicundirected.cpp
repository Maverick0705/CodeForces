#include<bits/stdc++.h>
using namespace std;

bool cyclecheck(vector<int> adj[] , vector<int>visited , int current)
{
	if(visited[current] == 2)
		return true;

	visited[current] = 1;
	bool FLAG = false;
	for(int i = 0; i < adj[current].size(); i++)
	{
		if(visited[adj[current][i]] == 1)
			visited[adj[current][i]] = 2;
		else
			FLAG = cyclecheck(adj , visited , adj[current][i]);
			if(FLAG == true)
				return true;
	}
	return false;
}


bool iscyclic(vector<int> adj[], int V)
{
	vector<int> visited(V , 0);
	bool FLAG = false;

	for(int i = 0 ; i< V ; i++)
	{
		visited[i] = 1;
		for(int j = 0 ; j < adj[i].size(); ++j)
		{
			FLAG = cyclecheck(adj , visited , adj[i][j]);
			if(FLAG == true)
				return true;
		}
		visited[i] =0;
    }
    return false;
}


int main()
{
	int v , e;
	cin >> v >> e;

	vector<int>adj[v];

	for(int i = 0;  i< e; i++)
	{
		int x , y;
		cin >> x >> y;

		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	bool a = iscyclic(adj, v);
	if(a == true)
	{
		cout << "Yes";
	}
	else
		cout << "No";
}
