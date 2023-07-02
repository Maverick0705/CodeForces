#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n, q;
	cin >> n >> q;
	int arr[n+3];
	int b[n+4];

	for(int i = 1 ; i <= n; i++)
	{
		cin >> arr[i];   
	}
	sort(arr , arr+n , greater<int>());
	    b[0] = 0;
		for(int i = 1 ; i <= n ;i++)
		{
			b[i]= b[i-1] + arr[i];
		}

	while(q--)
	{
		
		int x , y;
		cin >> x >> y;
		int  sum =  b[x] - b[x-y];
		cout << sum << endl; 

	}

}