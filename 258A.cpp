#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	/*string a;
	cin >> a;

	ll zero = 0, one = 0 , index = 0 , x =0;
	string ans = "";

	for(int i = 0; i<a.size() ;i++)
	{
		if(a[i] == '0')
		{
			zero++;
			if(x == 0)
			{
				index = i;
				x++;
			}
		}
		else one++;
	}

	if(zero == 0)
	{
		for(int i = 1; i<a.size();i++)
		{
			ans.push_back(a[i]);
		}
		cout << ans;
	}
	else
	{
		for(int i = 0; i< a.size(); i++)
		{
			if(i != index)
			{
				ans.push_back(a[i]);
			}
		}

		cout << ans;
	}*/

	string s;
	cin >> s;

	int pos;
	int n = s.size();

	pos = s.find('0');

	if(pos == -1)
	{
		cout << s.substr(1);
	}
	else
	{
		cout << s.substr(0,pos) + s.substr(pos+1);
	}

  return 0;
}