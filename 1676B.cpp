#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		vector<int> v(n);
		for(int j = 0 ; j < n ; j++)
		{
			cin >> v[j];
		}
	
		int min = *min_element(v.begin(), v.end());
		int sum = 0;
		for(int i = 0; i < n ; i++)
		{
			sum += (v[i] - min);
		}
		cout << sum<< endl;
	}
}