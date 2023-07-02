#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i< n ;i++)
	{
		cin >> a[i];
	}
	sort(a, a+n , greater<int>());
	int ans = 0 , sum = 0;
	/*for(int i = 0; i< n ;i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;*/
	for(int i = 0; i< n ;i++)
	{
		sum+= a[i];
	}
	int c= 0;
	for(int i = 0; i < n; i++)
	{
		ans += a[i];
		sum -= a[i];
		c++;
		if(ans > sum)
		{
			break;
		}
	}
	cout << c<< endl;
}