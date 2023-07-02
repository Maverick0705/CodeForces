#include<bits/stdc++.h>
using namespace std;

int DigitCount(int n)
{
	int count = 0;
	while(n)
	{
		count++;
		n/=10;
	}
	return count;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n , ans; 
		cin >> n;
		int digit = DigitCount(n);
		if(digit == 2)
		{
			cout << n%10 <<endl;
			continue;
		}
		else
		{
			int mn = 10;
			while(n)
			{
				int m= n%10;
				mn = min(mn,m);
				n/=10;
			}
			cout << mn << endl;
		}
	}
	return 0;
}