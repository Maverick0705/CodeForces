#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
		int p;
		cin >> p;
		int s = p;
		int x = n-1;
		int c = 0;
		while(x--)
		{
			int m;
			cin >> m;
			if(m != s)
			{
				c++;
				s = m;
			}

		}
	cout << c+1 << endl;
}