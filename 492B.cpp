#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n , l;
	cin >>  n >> l;
	double a[n+1];
	double ans = 0;

	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	sort(a , a+n);

	ans = max(ans, a[0]);
	ans = max(ans, l - a[n-1]);
	for(int i = 0; i < n-1 ; i++)
	{
	 	double diff = a[i+1] - a[i];
	 	diff = diff/2.00;
	 	ans = max(ans, diff);
	}


	cout << fixed << setprecision(10) << ans << endl;
}