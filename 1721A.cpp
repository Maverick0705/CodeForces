#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
	char a , b , c , d;
	string y;
	cin >> a >> b >> c >> d;
	y.push_back(a);
	y.push_back(b);
	y.push_back(c);
	y.push_back(d);

	int ans = 0;
	sort(y.begin(), y.end());
	for(int j = 0 ; j<3 ; j++)
	{
		if(y[j] != y[j+1])
		{
			ans+= 1;
		}
	}
	cout << ans << endl;
	}
	return 0;
}