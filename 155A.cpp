#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
		int n;
		cin >> n;
		int a[n];

		for(int i = 0 ; i< n;i++)
		{
			cin >> a[i];
		}

		int min = a[0];
		int max = a[0];
		int ans = 0;

		for(int i = 0; i <n ;i++)
		{
			if(a[i] > max)
			{
				max = a[i];
				ans++;
			}
			else if(a[i] < min)
			{
				min = a[i];
				ans++;
			}
		}

		cout << ans << endl;

  return 0;
}