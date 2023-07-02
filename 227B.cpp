#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n;
	cin >> n;
	ll a[n+1];
	unordered_map<int,int> um1;
	unordered_map<int,int> um2;

	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
		um1[a[i]]++;
		um2[a[i]]++;
	}
	ll m;
	cin >> m;
	ll b[m+1];
	for(int i = 1 ; i<=m;i++)
	{
		cin >> b[i];
	}

 	ll ans1 = 0; ll ans2 = 0;

 	int k = 1;
 	int c =0 ;
 	for(int i = 1; i <= m; i++)
 	{
 		for(int j = 1; j <= n; j++)
 		{
 			if(b[k] == a[j])
 			{
 				ans1+= j;
 					
 				
 			}
 		}
 	}

 	int t = 1 , r = 0;
 	for(int i = m; i >= 1; i--)
 	{
 		for(int j = n; j >= 1; j--)
 		{
 			if(b[t] == a[j])
 			{
 			     ans2 += n - j+1;
 					
 			}
 		}
 	}

 	cout << ans1 << " "<< ans2 ;
	
}