#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t ; 
	cin >> t;
	while(t--)
	{
		int sum ;
		int n , m;
	 vector <string> a(n);
		cin >> n >> m;
		for(int i = 0 ; i < n; i++)
		{
			cin >> a[i];
		}
		int ans = INT_MAX;



		for(int i = 0; i < n-1 ; i++)
		{
			for(int j= i+1 ; j < n ; j++)
			{
			    sum = 0;
				for(int k = 0 ; k <  m; k++)
				{
					sum = sum + abs(a[i][k] - a[j][k]);
				}
				if(sum < ans)
				{
					ans = sum;
				}
		     }
		}

		cout << ans << endl;
	}
}