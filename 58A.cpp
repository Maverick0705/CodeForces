#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int n = s.size();
	int c1 = 0 , c2 = 0 , c3 = 0 , c4 = 0;
	int x;
	for(int i = 0; i < n ; i++)
	{
		if(s[i] == 'h')
		{
			x = i;
			c1++;
			break;
		}
	}
	for(int i = x; i < n ; i++)
	{
		if(s[i] == 'e')
		{
			x = i;
			c2++;
			break;
		}
	}
	for(int i = x; i < n ; i++)
	{
		if(s[i] == 'l')
		{
			x = i;
			c3++;
			if(c3 == 2)
			break;
		}
	}
	for(int i = x; i < n ; i++)
	{
		if(s[i] == 'o')
		{
			x = i;
			c4++;
			break;
		}
	}
	if(c1 > 0 && c2 > 0 && c3> 1 && c4>0)
	{
	cout << "YES" << endl;
	}
	else
	{cout << "NO" << endl;}

}