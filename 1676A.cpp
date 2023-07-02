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
		int s1 = 0, s2 = 0 , c = 0;
		while(n>0)
		{
			if(c<3)
			{
				s1 += (n%10);
				n = n/10;
				c++;
			}
			else
			{
				s2 +=(n%10);
				n /=10;
				c++;
			}
		}
		if(s1== s2)
		{
			cout << "YES" <<endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}