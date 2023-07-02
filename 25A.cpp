#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n;
	cin >> n;
	int a[n+1];
	int odd = 0 , even = 0 , indexodd= 0 , indexeven = 0;

	for(int i = 1; i<= n ;i++)
	{
		cin >> a[i];
	}

	for(int i = 1 ; i<= n;i++)
	{
		if(a[i] % 2 == 0)
		{
			even++;
			indexeven= i;
		}
		else
		{
			odd++;
			indexodd = i;
		}
	}

	if(even > odd)
	{
		cout << indexodd;
	}
	else
	{
		cout << indexeven;
	}

	return 0;
}