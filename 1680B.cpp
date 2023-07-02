#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n ,m;
		cin >> n >> m;
		string s;
		vector<vector<char>>v(n,vector <char>(m));
		for(int  i = 0; i < n; i++)
		{
			cin >> s;
			for(int j = 0; j < m; j++)
			{
				v[i][j] = s[j];
			}
		}
		int x ;
		bool flag  = false , flag1 = true;
		for(int i = 0 ; i < n ; i++)
		{
			for(int j= 0 ; j < m ; j++)
			{
				if((v[i][j] =='R') && (flag == false))
				{
					flag = true;
					x = j;
				}
				else if(v[i][j] == 'R')
				{
					if(j < x)
					{
						flag1 = false;
						break;
					}
				}
			}
		}

		if(flag1 != false)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}