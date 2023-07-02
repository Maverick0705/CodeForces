#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int min_number_of_coins(ll n , ll dp[])
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
	for(int i = 1 ; i <= m;i++)
	{
		dp[i] +=  min_number_of_coins((n-i), dp) + 1;
	}
	return dp[n];
}

int main()
{
	ll n , m;
	cin >> n >>m;
	ll dp[n+1];
	memset(dp , -1 , sizeof(dp));

	cout << min_number_of_coins(n , m , dp);
	
  return 0;
}