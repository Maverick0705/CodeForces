#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	string t;
	cin >> s;
	cin >> t;
	string m;

	reverse(s.begin(), s.end());
	m = s;
	if(m == t)
	{
		cout <<"YES" <<endl;
	}
	else
	{
		cout <<"NO" <<endl;
	}
}