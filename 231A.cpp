#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int ans =0;
	while(n--)
	{
		int a , b , c;
		cin >> a >> b >> c;
		int flag = 0;

		if(a == 1)
		{
			flag++;
		}
		if(b == 1)
		{
			flag++;
		}if(c == 1)
		{
			flag++;
		}

		if(flag >= 2)
		{
			ans++;
		}
	}

	cout << ans << endl ;
}