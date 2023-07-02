#include<bits/stdc++.h>
using namespace std;

#define V 6

int findMinVertex(vector<int> value , vector<bool> SetMST)
{
	int vertex;
	int min = INT_MAX;

	for(int i = 0 ; i < V ; i++)
	{
		if(SetMST[i] == false && value[i] < min)
		{
			vertex = i;
			min = value[i];
		}
	}
	return vertex;
}


void findMST(int graph[V][V])
{
	vector<int> value(V, INT_MAX);
	vector<bool> SetMST(V , false);

	int parent[V];

	parent[0] = -1;
	value[0] = 0;

	for(int i = 0 ; i < V-1 ; i++)
	{
		int U = findMinVertex(value , SetMST);
		SetMST[U] = true;

		for(int j = 0 ;j < V; j++)
		{
			if(graph[U][j] != 0 && SetMST[j] == false && graph[U][j] < value[j])
			{
				value[j] = graph[U][j];
				parent[j] = U;
			}
		}
	}
	int sum= 0;
	for(int i = 1 ; i < V; i++)
	{
		sum += graph[parent[i]][i];
	}

	cout << "Min cost of MST : " << sum;
}

int main()
{
	int graph[V][V] = { {0, 4, 6, 0, 0, 0},
						{4, 0, 6, 3, 4, 0},
						{6, 6, 0, 1, 8, 0},
						{0, 3, 1, 0, 2, 3},
						{0, 4, 8, 2, 0, 7},
						{0, 0, 0, 3, 7, 0} };

	findMST(graph);
}