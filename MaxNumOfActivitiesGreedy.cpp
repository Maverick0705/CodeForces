#include<bits/stdc++.h>
using namespace std;

bool cmp(vector<int> &a , vector <int>&b)
{
	return a[1] <= b[1];
}

int main()
{
		vector<vector<int>> v = {{1,3} , {2,6} , {4,5} ,{5 ,7}};
		sort(v.begin(), v.end() , cmp);

		for(int i = 0; i < v.size(); i++)
		{
			for(int j = 0 ; j < v[i].size(); j++)
			{
				cout << v[i][j] << " ";
			}

		}

		int ans = 0;
		int freeAt =0;
		for (int i = 0; i < v.size(); i++)
		{
			if(freeAt <= v[i][0])
			{
				ans++;
				freeAt= v[i][1];
			}
		}
		cout << endl;
		cout << ans << endl;
	return 0;
}