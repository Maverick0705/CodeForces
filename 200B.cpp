#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	int n;
	cin >> n;
    double ans  , sum = 0;
    double arr[n] ;
	for(int i = 0 ; i<n; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}

	ans = sum / n;

	cout << fixed << setprecision(12) << ans;
  return 0;
}