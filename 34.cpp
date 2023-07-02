#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	int n, m;
	cin >> n >> m;

	int a[n];
	for(int i = 0; i < n ; i++)
	{
		cin >> a[i];
	}

	sort(a , a+n);

	int ans = 0 ;
	for(int i = 0; i < m ;i++)
	{
		if(a[i] <= 0)
		{
			ans+=a[i];
		}
		else break;
	}
	cout << abs(ans);
  return 0;
}