#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	int n , count = 0; cin >> n;
	int arr[n];
	int comp = n/2;
	for(int i = 0 ; i < n; i++)
	{
		cin >> arr[i];
	}

	for(int i = 0 ; i < n ; i++)
	{
		if(i%2 == arr[i]%2)
		{
			count++;
		}
		if(count == comp)
		{
			break;
		}
	}

	cout << count << endl;
}
}