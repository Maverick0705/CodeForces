#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	int t;
	cin >> t;
	while(t--)
	{

		int n;
		cin >> n;
		int a[n],b[n];

		for(int i = 0; i < n ;i++)
		{
			cin >> a[i];
		}
		for(int i = 0; i < n ;i++)
		{
			cin >> b[i];
		}
		 int c[n];
		for(int i = 0; i < n ;i++)
		{
			c[i] = b[i] - a[i];
		}

		sort(c , c+n);

		int i = 0, j= n-1;
		int count = 0;
		while(i < j)
		{
			if(c[i] + c[j] < 0)
			{
				i++;
				
			}
			else
			{
				count++;
				i++;
				j--;
			}
		}

		cout << count << endl;

	}
    
  return 0;
}