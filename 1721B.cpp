#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll n, m,sx ,sy,d;
		cin >> n >> m >> sx >> sy >> d;
		ll ans = 0;
		ll i = 1 ,j = 1;
		ll diff1 = abs(n - sx) + abs(m - sy);
		ll diff2 = abs(i - sx) + abs(j - sy);
		bool flag = false;

		if( diff1 <= d)
		{
			cout << "-1" << endl;
		}
		else
		{
			
			while( i <= n)
			{
				if(diff2 > d)
				{
					ans++;
					i++;
				}
				else
				{
					flag = true;
					break;
				}
			}

			while( j <= m)
			{
				if(diff2 > d)
				{
					ans++;
					j++;
				}
				else
				{
					flag = true;
					break;
				}
			}

			if(flag == true)
			{
				cout << "-1" << endl;
			}
			else
			{
				cout << ans << endl;
			}
	
		}
	}
	return 0;
}