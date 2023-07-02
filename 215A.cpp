#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	int n,m;
	cin >> n;
	int a[n];
	for(int i = 0; i < n ;i++)
	{
		cin >> a[i];
	}
	cin >> m;
	int max = 0 , count = 0;
	for(int i = 0; i < m; i++)
	{
		int b;
		cin >> b;

		for(int j = 0 ; j < n ;j++)
		{
			if(b % a[j]== 0)
			{
				if(b / a[j] > max)
				{
					max = b/a[j];
					count = 1;
				}
				else if(b/a[j] == max)
				{
					count++;
				}
				break;
			}
		}
	}

    cout << count;
  return 0;
}