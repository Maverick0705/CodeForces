#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int ans =0;
	int max = INT_MIN;
	int a , b;
		cin >> a >> b;
		int diff = b - a;
	for(int i =n-1; i > 0 ;i--)
	{
		int a , b;
		cin >> a >> b;
		int res;
		res = (diff - a)+ b;
		//diff = res;
		if(max < res)
		{
			max = res;
		}
		ans = max;

	}

	cout << ans << endl ;
}