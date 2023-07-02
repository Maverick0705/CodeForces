#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		vector<vector<char>> v(9 , vector<char> (9));
		for(int i = 1 ; i < 9 ; i++)
		{
			for(int j = 1 ; j < 9 ; j++)
			{
				cin >> v[i][j];
			}
		}
	
	/*for(int i = 1 ; i < 9 ; i++)
		{
			for(int j = 1 ; j < 9 ; j++)
			{
				cout << v[i][j];
				cout << endl;
			}
			cout << endl;
		}
		cout << endl;*/
	int x = 0 , y = 0, count = 0;
	for(int i = 1; i < 9 ; i++)
	{
		for(int j = 1 ; j < 9 ; j++)
		{
			if(v[i][j] == '#')
			{
				if(v[i-1][j-1] == '#' && v[i-1][j+1]=='#')
				{
					x = i;
					y = j;
					count++;
					break;
				}
			}
		}
		if(count > 0)
		{
			break;
		}
	}

	cout << x <<" " << y << endl;
}
}