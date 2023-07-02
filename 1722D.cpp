#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		string a;
		cin >> a;
		vector <ll> v1, v2;
		ll ans = 0;
		for(int i = 0 ; i < n; i++)
		{
			if(a[i] == 'R')
			{
				ans+= i;
			}
			else
			{
				ans+= i;
			}
			if(a[i] == 'L' && i < (n-i-1))
			{
				v2.push_back(n-1-i-i);
			}
			else if(a[i] == 'R' && i < (n-i-1))
			{
				v2.push_back(i+1+i-n);
			}
		}

		sort(v2.begin() , v2.end());
		reverse(v2.begin(),v2.end());

		ll sum = 0;
		for(int i = 0 ; i < v2.size(); i++)
		{
		sum+= v2[i];
		v1.push_back(ans+sum);
		}

		for(int i = t; i< n;i++)
		{
			v1.push_back(ans+sum);
		}

		for(int i = 0 ; i<v1.size(); i++)
		{
			cout << v1[i] << " ";
		}
		cout << endl;
	}
}