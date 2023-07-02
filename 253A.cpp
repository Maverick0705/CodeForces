#include<bits/stdc++.h>
#include <fstream>
using namespace std;

#define ll long long

int main()
{
	int n, m;
	cin >> n >> m;
	
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	if(n == m)
	{
		int size = n+m;
		for(int i = 0; i < size ;i++)
		{
			if(i%2 == 0)cout <<'G';
			else cout << 'B';
		}
	}

	else if(n > m)
	{
		while(n > m)
		{
			cout <<'B';
			n--;
		}
		int size = n+m;
		for(size_t i = 0; i < size ;i++)
		{
			if(i%2 == 0) cout << 'G';
			else cout << 'B';
		}
	}
	else
	{
		while(n < m)
		{
			cout << 'G';
			m--;
		}
		int size = n+m;
		for(int i = 0; i < size ;i++)
		{
			if(i%2 == 0) cout <<'B';
			else cout << 'G';
		}
	}

  return 0;
}