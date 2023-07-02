#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll n;
	cin >> n;
	ll a[n];
	for(int i =0 ; i < n ; i++)
	{
		cin >> a[i];
	}

	sort(a , a+n);
	ll maxi  = 0;
	ll diff = a[n-1] - a[0];
	maxi = max(diff, maxi);
	cout << maxi << " " ;


	ll mini = a[0], maxi_element = a[n-1];
	ll minicount= 0, maxicount= 0 , ans ;

	for(int i = 0 ; i < n ;i++)
	{
		if(a[i] == mini)
		{
			minicount++;
		}
		 if( a[i] == maxi_element)
		{
			maxicount++;
		}
	}

	if(maxicount == minicount && mini == maxi_element)
	{
		ans = (maxicount * (maxicount -1)) / 2;
	}
	else
	{
		ans = maxicount*minicount;
	}

	cout << ans ;
  return 0;
}