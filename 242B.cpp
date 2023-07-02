#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	int n;
	cin >> n;
	vector<pair<int,int>> v;
	ll maxi = 0, mini = 10000000001;
	for(int i = 0; i < n ; i++)
	{
		int a , b;
		cin >> a >> b;
		if(a < mini)
		{
			mini = a;
		}
		if(b > maxi)
		{
			maxi = b;
		}
		v.push_back(make_pair(a,b));
	}

	ll ans;
	bool flag = false;

	for(int i = 0 ; i< v.size(); i++)
	{
		if(v[i].first == mini && v[i].second == maxi)
			{ans = i+1;flag = true;}

	}

	if(flag == true){cout << ans;}
	else cout <<"-1";
    
  return 0;
}