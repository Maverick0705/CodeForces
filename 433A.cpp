#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	int n;
	cin >> n;
	int a[n];

	for(int i = 0 ; i < n; i++)
	{
		cin >> a[i];
	}

	int c1 =0 , c2 =0;

	for(int i = 0; i < n ;i++)
	{
		if(a[i] == 100)
		{
			c1++;
		}
		else c2++;
	}

	c2 = c2%2;
	c1 = c1 - 2*c2;

	if(c1 % 2 == 0 && c1 >= 0) cout << "YES";
	else cout << "NO";

    
  return 0;
}