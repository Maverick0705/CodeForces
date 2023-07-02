#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int number_of_ways(ll n , ll dp[])
{
	if(n < 0)
	{
		return 0;
	}
	if(n == 0)
	{
		return 1;
	}

	if(dp[n] != -1)
		return dp[n];

	dp[n] = 0;
	for(int i = 1 ; i <= 6;i++)
	{
		dp[n] = (dp[n] + number_of_ways((n-i), dp))% mod;
	}
	return dp[n];
}

int main()
{
	ll n;
	cin >> n;
	ll dp[n+1];
	memset(dp , -1 , sizeof(dp));

	cout << number_of_ways(n , dp);
	/*dp[0] = 1;
	for(int i = 1 ; i<= n;i++)
	{
		for(int j = 1; j<= 6;j++)
		{
			if(i-j < 0)
				break;
			if(i-j >= 0)
			{
				dp[i] = (dp[i] + dp[i-j]) % mod;
			} 
		}
	}

	cout << dp[n];*/
  return 0;
}