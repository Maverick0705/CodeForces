#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	map<int> m1;
	for(int i = 0; i < n ; i++)
	{
		int x;
		cin >> x;
		m1.insert(x);
	}

	int m;
	cin >> m;
	map<int> m2;

	for (int i = 0; i <m ; i++)
	{
		int y;
		cin >> y;
		if(m1.find(y))
		{
			m2.insert(y);
			m1.erase(y);
		}
	}

	cout << "common values are: " << endl;

	for(auto i : m2)
	{
		cout << i << " " ;
	}
}