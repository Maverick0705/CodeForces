#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


int main()
{
	ll n , x;
	cin >> n >> x;
	vector<ll> dp(x+1, 0);
	dp[0] = 1;
	vector<ll> coins(n);
	for(int i = 0; i < n; i++)
	{
		cin >> coins[i];
	}

	cout << ans(n, x , )
	
	for(int i = 1 ; i <= x;i++)
	{
		for(int j = 0; j < n;j++)
		{
			if(coins[j] > i)continue;
			else
			{
				dp[i] = (dp[i] + dp[i - coins[j]])%mod;
			}
		}
	}

	cout << dp[x] % mod;

}