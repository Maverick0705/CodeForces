#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n , m;
		cin >> n >> m;
		int arr[n];

		for(int i = 0 ; i <  n; i++)
		{
			cin >> arr[i];
		}

		int sum = 0;
		for(int i = 0 ; i< n ; i++)
		{
			sum+= arr[i];
		}

		int ans = max(0 , sum - m);
		cout << ans << endl;
	}
}