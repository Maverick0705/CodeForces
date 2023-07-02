#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int> adj[] , int src , bool visited)
{
	stack <int> st;
	st.push(src);
	visited[src] = true;

	while(!st.empty()){
		int cur_node = st.pop();
		for(int nextnode = 0 ; nextnode < n; nextnode++)
		{
			if((adj[cur_node][nextnode] == 1) && !visited[nextnode])
			{
				visited[nextnode] = true;
				st.push(nextnode);
			}
		}
	}
}

int main()
{

	int nodes, edges , x , y;
	int connectedComponents = 0;
	cin >> nodes;
	cin >> edges;
	vector <int> adj[n];
	for(int i = 0 ; i < edges ; i++){
	cin >> x >> y;
	adj[x].push_back(y);
	adj[y].push_back(x);
	}
	for(int i = 1;i <= nodes;++i) {
         if(visited[i] == false)     {
             dfs(adj, i , visited);
             connectedComponents++;
         }
        }
cout << "Number of connected components: " << connectedComponents << endl;
        return 0;
    

	

}