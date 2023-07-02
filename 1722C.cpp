#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	    unordered_map<string , int> um;
		int n;
		cin >> n;
		string s;
		for(int i = 0; i < 3; i++)
		{
			for(int j = 0 ; j<n;j++)
			{
				string y;
				cin >> y;
				um[y]++;
			}
		}

		vector<int> v;
		int k =0;

		for(int i = 0 ; i< 3 ; i++)
		{
			int ans = 0;
			for(int j = 0; j < n; j++)
			{
				if(um[s] == 1)
				{
					ans+= 3;
				}
				else if(um[s] == 2)
				{
					ans+= 1;
				}
				else
				{
					ans+= 0;
				}
			}
			v[k++] = ans;
		}

		for(int i = 0 ; i < v.size() ; i++)
		{
			cout << v[i] << " ";
		}
		cout << endl;



	}
}