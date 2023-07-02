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

		string a, b;
		cin >> a >> b;
		bool flag = false;

		for(int i = 0 ; i < n ;i++)
		{
			if(a[i] != 'R' && b[i] != 'R')
			{
				flag = true;
				continue;
			}
			if(a[i] == 'R' && b[i] == 'R')
			{
				flag = true;
				continue;
			}
			else
			{
				flag = false;
				break;
			}
		}

		if(flag == true)
		{
			cout << "YES" << endl;
		}
		else
		{
		 	cout << "NO" << endl;
		}

	}
}