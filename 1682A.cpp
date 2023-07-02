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
		string s;
		cin >> s;

		int count = 1;
		int mid = n/2;

		for(int i = mid ; i < n ; i++)
		{
			if(i+1<n && s[i] == s[i+1])
			{
				count++;
			}
			else
			{
				break;
			}
		}
		for(int i = mid ; i > 0 ; i--)
		{
			if( i-1 >= 0 && s[i] == s[i-1])
			{
				count++;
			}
			else
			{
				break;
			}
		}
	

		cout << count << endl;
	}
}