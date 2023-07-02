#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	int n;
	cin >> n;
	ll int arr[n];

	for(int i = 0; i< n; i++)
	{
		cin >> arr[i];
	}
	int count = 0 , c ;
	for(int i = 0 ; i < n-1 ; i++)
	{
		for(int j = i+1 ; j < n; j++)
		{
			c = 1;
			if(arr[i] <= arr[j])
			{
				c++;
			}
			else
			{
				break;
			}
		}

		if(c > count)
		{
			count = c;
		}
	}

	cout << count << endl;
}