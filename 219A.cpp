#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	int k;
	cin >> k;
	string s;
	cin >> s;
	string ans = "";
	vector<int> v(26,0);

	for(auto &c: s)
	{
		v[c - 'a']++;
	}
	for(int i = 0; i< 26;i++)
	{
		if(v[i] % k != 0)
			{cout <<"-1";
				return 0;
			}
		else
		{
			int times = v[i] /k;
			while(times--)
			{
				ans.push_back('a' + i);
			}
		}

	}

	string old= ans;
	while(--k)
	{
		ans+= old;
	}

	cout << ans;
  return 0;
}